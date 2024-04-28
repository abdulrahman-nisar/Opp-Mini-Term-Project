#include "Functions Only Main Function Can Use.h"

void inputContact(Contact& contact)
{
	std::string first_name;
	std::string last_name;
	std::string mobile_number;
	std::string email_address;
	do
	{
		cin.ignore();
		cout << "Enter First Name: ";
		getline(cin, first_name);
	} while (isStringOnlyAlphabets(first_name));

	do
	{
		cout << "Enter Last Name: ";
		getline(cin, last_name);
	} while (isStringOnlyAlphabets(last_name));

	do
	{
		cout << "Enter Mobile Number: ";
		getline(cin, mobile_number);
	} while (isStringOnlyNumbers(mobile_number) || isLengthOfMobileNumberIs11(mobile_number));

	cout << "Enter Email Address: ";
	getline(cin, email_address);

	contact.setFirstName(first_name);
	contact.setLastName(last_name);
	contact.setMobileNumber(mobile_number);
	contact.setEmailAddress(email_address);
	contact.setAddress(inputAddress());

}


Address* inputAddress()	 //Always return an address of an address object. You can't use this functions on static objects
{
	string house;
	string street;
	string city;
	string country;
	do
	{
		cout << "Enter House Number:  ";
		getline(cin,house);
	} while (isStringOnlyNumbers(house));

	do
	{
		cout << "Enter Street Number:  ";
		getline(cin, street);
	} while (isStringOnlyNumbers(street));

	do
	{
		cout << "Enter City:  ";
		getline(cin,city);
	} while (isStringOnlyAlphabets(city));

	do
	{
		cout << "Enter Country:  ";
		getline(cin, country);

	} while (isStringOnlyAlphabets(country));
	

	Address* address = new Address(house, street, city, country);
	return address;
}



void displayContactBookMenu() 
{
	cout << "1. Add New Contact." << endl
		<< "2. Merge Duplicates." << endl
		<< "3. Store To File." << endl
		<< "4. Print Contacts Sorted." << endl
		<< "5. Print Contacts." << endl
		<< "6. Search Contacts." << endl
		<< "7. Display Cout of Contacts." << endl
		<< "8. Exit." << endl << endl;
	
}

void displaySearchMenu() 
{
	cout << "Enter the choice how you want to search the contact:" << endl
		<< "1. Search contact by First_Name and Last_Name." << endl
		<< "2. Search contact by Phone_Number." << endl
		<< "3. Search contact by Address." << endl;

}


void displayStartUpMenu()
{
	cout << "<---------Menu of ContactsBook Application--------->" << endl
		<< "1. Create a new Contact Book. " << endl
		<< "2. Load From File" << endl
		<< "3. Exit." << endl;
}



