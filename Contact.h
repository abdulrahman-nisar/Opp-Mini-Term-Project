#pragma once

#ifndef BASIC_LIB
#define BASIC_LIB
	#include <iostream>
	#include <string>
#endif // !BASIC_LIB

#include "Address.h"


class Contact {
private:
	std::string first_name;
	std::string last_name;
	std::string mobile_number;
	std::string email_address;
	Address *address;

public:
	bool equals(Contact contact);			//Return 1 if two objects are equal
	Contact* copy_contact();			//It will return copy of a contact object

	Contact() {}
	Contact(std::string first_name, std::string last_name, std::string mobile_number, std::string email_address, Address *address);

	//Setters function
	void setFirstName(string f_name);
	void setLastName(string l_name);
	void setMobileNumber(string mobile_no);
	void setEmailAddress(string email);
	void setAddress(Address* recieved_address);


	//Getters function
	string getFirstName();
	string getLastName();
	string getMobileNumber();
	string getEmailAddress();
	Address getAddress();
};
