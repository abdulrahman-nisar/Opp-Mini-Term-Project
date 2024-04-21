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
		cout << "Enter Mobile NUmber: ";
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


Address* inputAddress()
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
