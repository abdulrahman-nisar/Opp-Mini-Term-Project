#include "ContactsBook.h"

int main()
{
	//cout << "<---------Welcome to the ContactsBook Application----------->" << endl;

	//int choice,size;
	//string file_name = "Null", string_choice = "Null", phone_number = "Null", first_name = "Null", last_name = "Null";
	//ContactsBook* contacts_book = nullptr;

	//while (1)
	//{
	//	displayContactBookMenu();
	//	cin >> choice;

	//	checkInput(choice);//for error checking

	//	if (choice == 1)//check if already contact list is created or not
	//	{
	//		cout << "You already created contacts list from given size." << endl;
	//		continue;
	//	}

	//	switch (choice)
	//	{

	//	case 1:

	//		cout << "Enter the size of contacts:" << endl;
	//		cin >> size;
	//		checkInput(size);
	//		contacts_book = new ContactsBook(size);

	//		break;

	//	case 2:
	//		contacts_book->add_contact();

	//		break;
	//	case 3:

	//		contacts_book->merge_duplicates();

	//		break;
	//	case 4:
	//		cout << "Enter the file name to store the contacts list:" << endl;
	//		do
	//		{
	//			getline(cin, file_name);

	//		} while (isStringOnlyAlphabets(file_name) || isEmpty(file_name));
	//			
	//
	//		contacts_book->save_to_file(file_name);

	//		break;

	//	case 5:

	//		cout << "Enter the file name to load the contacts list:" << endl;
	//		do
	//		{
	//			getline(cin, file_name);

	//		} while (isStringOnlyAlphabets(file_name) || isEmpty(file_name));
	//		
	//		contacts_book->load_from_file(file_name);
	//		
	//		break;

	//	case 6:
	//		
	//			cout << "1. Sort by first name." << endl
	//				<< "2. Sort by last name." << endl;

	//			cin >> choice;

	//			checkInput(choice);//Check for error
	//
	//			contacts_book->print_contacts_sorted(choice);

	//		break;

	//	case 7:

	//		contacts_book->displayContacts();
	//		
	//		break;

	//	case 8:
	//		do
	//		{
	//			displaySearchMenu();
	//			cin >> choice;

	//			checkInput(choice);//for error checking

	//			switch (choice)
	//			{
	//			
	//			case 1:

	//				cout << "Enter the first name of the contact to search:" << endl;
	//				do
	//				{
	//					getline(cin, first_name);

	//				} while (isStringOnlyAlphabets(first_name) || isEmpty(first_name));
	//				

	//				cout << "Enter the last name of the contact to search:" << endl;
	//				do
	//				{
	//					getline(cin, last_name);

	//				} while (isStringOnlyAlphabets(last_name) || isEmpty(last_name));

	//				
	//				contacts_book->search_contact(first_name, last_name)->printContact();

	//				break;

	//			case 2:

	//				cout << "Enter the phone number of the contact to search:" << endl;
	//				do
	//				{
	//					getline(cin, phone_number);

	//				} while (isLengthOfMobileNumberIs11(phone_number) || isEmpty(phone_number));
	//				

	//				contacts_book->search_contact(phone_number)->printContact();

	//				break;

	//			case 3:
	//				
	//				contacts_book->search_contact(inputAddress());

	//				break;

	//			default:

	//				cout << "Your Input is wrong!Enter Again:" << endl;
	//			}

	//		} while (!(choice <= 3));

	//		break;

	//	case 9:
	//		cout << "Count of Contacts till now is " << contacts_book->total_contacts() << "." << endl;
	//		break;

	//	case 10:

	//	exit(0);

	//		break;

	//	default:
	//		cout << "Wrong input enter choice again!" << endl << endl;


	//	}

	//}
//Address* address = new Address("12", "13", "FSD", "PAK");
//Contact c("Danial", "Zaheer", "03248399069", "DanialZaheer",address);
//Contact c2;
//c2.setAddress(address);
//delete address;
//c.printContact();
////c2.printContact();
//delete c.getAddress();
////c2.printContact();
	system("pause");


}

