#include "ContactsBook.h"
#include "Functions Only Main Function Can Use.h"

void workingInSorting(ContactsBook* contact_book);
void workingInSearching(ContactsBook* contact_book);

void workingInContactBookMenu(ContactsBook* contact_book);


int main()
{

	ContactsBook* contact_book = nullptr;
	bool* flag = new bool;
	*flag = true;
	int choice;
	int size;
	do
	{
		displayStartUpMenu();
		cin >> choice;
		checkInput(choice);

		switch(choice)
		{
		case 1:

			cout << "Enter the size of contacts:" << endl;
			cin >> size;
			checkInput(size);
			contact_book = new ContactsBook(size);
			*flag = false;
			break;
		case 2:
			contact_book = new ContactsBook;
			contact_book->load_from_file(file_name_G);
			*flag = false;
			break;
		case 3:
			if (contact_book != nullptr)
			{
				delete contact_book;
				exit(0);
			}
		default:
			cout << "Wrong Input\n";
		}
	}while (*flag == true);
	delete flag;
	workingInContactBookMenu(contact_book);

	
	system("pause");
	return 0;
}






void workingInSorting(ContactsBook* contact_book)
{
	int choice;
	cout << "1. Sort by first name." << endl
		<< "2. Sort by last name." << endl;
	cin >> choice;
	checkInput(choice);//Check for error
	contact_book->print_contacts_sorted(choice);
}

void workingInSearching(ContactsBook* contact_book)
{
	int choice;
	string first_name = "NULL", last_name = "NULL", phone_number = "NULL";
	do
	{
		displaySearchMenu();
		cin >> choice;
		Address* address = nullptr;
		checkInput(choice);//for error checking

		switch (choice)
		{

		case 1:

			cout << "Enter the first name of the contact to search:" << endl;
			do
			{
				getline(cin, first_name);

			} while (isStringOnlyAlphabets(first_name) || isEmpty(first_name));


			cout << "Enter the last name of the contact to search:" << endl;
			do
			{
				getline(cin, last_name);

			} while (isStringOnlyAlphabets(last_name) || isEmpty(last_name));


			contact_book->search_contact(first_name, last_name)->printContact();

			break;

		case 2:

			cout << "Enter the phone number of the contact to search:" << endl;
			do
			{
				getline(cin, phone_number);

			} while (isLengthOfMobileNumberIs11(phone_number) || isEmpty(phone_number));


			contact_book->search_contact(phone_number)->printContact();

			break;

		case 3:

			address = new Address;
			inputAddress(address);
			contact_book->search_contact(address);

			break;

		default:

			cout << "Your Input is wrong!Enter Again:" << endl;
		}

	} while (!(choice <= 3));
}

void workingInContactBookMenu(ContactsBook* contact_book)
{
	int choice;
	while (1)
	{
		displayContactBookMenu();
		cin >> choice;
		checkInput(choice);//for error checking
		switch (choice)
		{
		case 1:
			contact_book->add_contact();
			break;
		case 2:

			contact_book->merge_duplicates();
			break;
		case 3:
			contact_book->save_to_file(file_name_G);
			break;
		case 4:

			workingInSorting(contact_book);
			break;

		case 7:
			contact_book->displayContacts();
			break;

		case 8:

			workingInSorting(contact_book);
			break;

		case 9:
			cout << "Count of Contacts till now is " << contact_book->total_contacts() << "." << endl;
			break;

		case 10:
			if (contact_book != nullptr)
			{
				delete contact_book;
			}
			exit(0);
			break;

		default:
			cout << "Wrong input enter choice again!" << endl << endl;


		}

	}
}



