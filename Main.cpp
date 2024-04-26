/*I have removed the else part in add contact functions of ContactsBook.cpp. BEacuse we onl have to check size
and resize_list() only if requaired. But adding a new contact is compulsory. If we put the else part the new
contact will not be added and only the list will be resized. It will create a logical error.
Also I have Called the full() function in if statement beacuse it is checking the if the list is full or not.*/







#include "ContactsBook.h"

int main()
{
	//cout << "<---------Welcome to the ContactsBook Application----------->" << endl;

	//int choice,size;
	//string file_name, string_choice, phone_number;

	//while (1)
	//{
	//	cout << "<---------Menu of ContactsBook Application--------->" << endl
	//		<< "1. Create a contacts list from given size." << endl
	//		<< "2. Add New Contact." << endl
	//		<< "3. Merge Duplicates." << endl
	//		<< "4. Store To File." << endl
	//		<< "5. Load from file." << endl
	//		<< "6. Print Contacts Sorted." << endl
	//		<< "7. Print Contacts." << endl
	//		<< "8. Search Contacts." << endl
	//		<< "9. Display Cout of Contacts." << endl
	//		<< "10. Exit." << endl << endl;
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
	//		ContactsBook contacts_book(size);
	//		break;

	//	case 2:
	//		//ambhiguity in this case
	//		//contacts_book.add_contact

	//		break;
	//	case 3:

	//		contacts_book.merge_duplicates();

	//		break;
	//	case 4:
	//		cout << "Enter the file name to store the contacts list:" << endl;
	//		do
	//		{
	//			getline(cin, file_name);

	//		} while (isStringOnlyAlphabets(file_name) || isEmpty(file_name));
	//			
	//
	//		contacts_book.save_to_file(file_name);

	//		break;

	//	case 5:

	//		cout << "Enter the file name to load the contacts list:" << endl;
	//		do
	//		{
	//			getline(cin, file_name);

	//		} while (isStringOnlyAlphabets(file_name) || isEmpty(file_name));
	//		
	//		contacts_book.load_from_file(file_name);
	//		
	//		break;

	//	case 6:
	//		do
	//		{
	//			cout << "1. Sort by first name." << endl
	//				<< "2. Sort by last name." << endl;

	//			getline(cin, string_choice);

	//		} while (isStringOnlynumber(string_choice) || isEmpty(string_choice));

	//			contacts_book.print_contacts_sorted(string_choice);

	//		break;

	//	case 7:
	//		//in this case we have to print contacts but their is not any function
	//		//to print contacts
	//		break;

	//	case 8:
	//		do
	//		{
	//			cout << "Enter the choice how you want to search the contact:" << endl
	//				<< "1. Search contact by First_Name and Last_Name." << endl
	//				<< "2. Search contact by Phone_Number." << endl
	//				<< "3. Search contact by Address." << endl;
	//			cin >> choice;
	//			checkInput(choice);//for error checking
	//			switch (choice)
	//			{
	//			
	//			case 1:
	//				string first_name, last_name;

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
	//				contacts_book.search_contact(first_name, last_name)->printContact();

	//				break;

	//			case 2:

	//				cout << "Enter the phone number of the contact to search:" << endl;
	//				do
	//				{
	//					getline(cin, phone_number);

	//				} while (isLengthOfMobileNumberIs11(phone_number) || isEmpty(phone_number));
	//				

	//				contacts_book.search_contact(phone_number)->printContact();

	//				break;

	//			case 3:
	//				//how to implement this?
	//				//contacts_book.search_contact();

	//				break;
	//			default:
	//				cout << "Your Input is wrong!Enter Again:" << endl;
	//			}

	//		} while (!(choice <= 3));

	//		break;

	//	case 9:
	//		cout<<"Count of Contacts till now is "<<contacts_book.total_contacts()<<"."<<endl;
	//		break;

	//	case 10:
	//	exit(0);
	//		break;

	//	default:
	//		cout << "Wrong input enter choice again!" << endl << endl;


	//	}

	//}


}

