
#include "ContactsBook.h"
int main()
{
	int choice,size;

	while (1)
	{
		cout << "<---------Welcome to the ContactsBook Application----------->" << endl
			<< "<---------Menu of ContactsBook Application--------->" << endl
			<< "1. Create a contacts list from given size." << endl
			<< "2. Add New Contact." << endl
			<< "3. Merge Duplicates." << endl
			<< "4. Store To File." << endl
			<< "5. Load from file." << endl
			<< "6. Print Contacts Sorted." << endl
			<< "7. Print Contacts." << endl
			<< "8. Search Contacts." << endl
			<< "9. Display Cout of Contacts." << endl
			<< "10. Exit." << endl << endl;
		cin >> choice;

		checkInput(choice);//for error checking

		switch (choice)
		{

		case 1:
			cout << "Enter the size of contacts:" << endl;
			cin >> size;
			checkInput(size);
			//ContactsBook contacts_book(5);
			break;
		case 2:


			break;
		case 3:


			break;
		case 4:


			break;
		case 5:

			break;
		case 6:


			break;
		case 7:
			break;
		case 8:

			break;
		case 9:

			break;
		case 10:


			break;
		default:
			cout << "Wrong input enter choice again!" << endl << endl;


		}

	}


}

