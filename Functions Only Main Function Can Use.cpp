#include "Functions Only Main Function Can Use.h"

void inputContact(Contact& contact)
{
	std::string first_name;
	std::string last_name;
	std::string mobile_number;
	std::string email_address;
	do
	{
		cout << "Enter First Name: ";
		getline(cin, first_name);
	} while (isStringOnlyAlphabets(first_name) || isEmpty(first_name));

	do
	{
		cout << "Enter Last Name: ";
		getline(cin, last_name);
	} while (isStringOnlyAlphabets(last_name) || isEmpty(last_name));

	do
	{
		cout << "Enter Mobile Number: ";
		getline(cin, mobile_number);
	} while (isStringOnlyNumbers(mobile_number) || isEmpty(mobile_number) || isLengthOfMobileNumberIs11(mobile_number));

	cout << "Enter Email Address: ";
	getline(cin, email_address);

	contact.setFirstName(first_name);
	contact.setLastName(last_name);
	contact.setMobileNumber(mobile_number);
	contact.setEmailAddress(email_address);
	contact.setAddress(inputAddress());

}


Address* inputAddress()				//Always return an address
{
	string house;
	string street;
	string city;
	string country;

	do
	{
		cout << "Enter House Number:  ";
		cin >> house;
	} while (isStringOnlyNumbers(house) || isEmpty(house));

	do
	{
		cout << "Enter Street Number:  ";
		cin >> street;
	} while (isStringOnlyNumbers(street) || isEmpty(street));

	do
	{
		cout << "Enter City:  ";
		getline(cin,city);
	} while (isStringOnlyAlphabets(city) || isEmpty(city));

	do
	{
		cout << "Enter Country:  ";
		getline(cin, country);

	} while (isStringOnlyAlphabets(country) || isEmpty(country));
	

	Address* address = new Address(house, street, city, country);
	return address;
}


void displayContactBookMenu() 
{
	cout << "<---------Menu of ContactsBook Application--------->" << endl
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
	
}

void displaySearchMenu() 
{
	cout << "Enter the choice how you want to search the contact:" << endl
		<< "1. Search contact by First_Name and Last_Name." << endl
		<< "2. Search contact by Phone_Number." << endl
		<< "3. Search contact by Address." << endl;

}
