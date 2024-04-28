#pragma once
#include "Address.h"

#ifndef BASIC_LIB
#define BASIC_LIB
	#include <iostream>
	#include <string>
    #include<fstream>
#endif // !BASIC_LIB




class Contact 
{
private:
	std::string first_name;
	std::string last_name;
	std::string mobile_number;
	std::string email_address;
	Address *address;

public:
	bool equals(const Contact& contact) const;			//Return 1 if two objects are equal
	void copy_contact(Contact& contact);			//It will recieve contact object and deep copy it to *this object
	void printContact();			//This function will print a contact
	void swapContact(Contact& contact);			//This is used to swap two contacts
	void setAddressToNull();			//This function is used to set address to null if we delete address due to any reason


	Contact();
	Contact(const string first_name, const string last_name, const string mobile_number, const string email_address,const  Address* const a_address);
	~Contact();

	//Setters function
	void setFirstName(const string f_name);
	void setLastName(const string l_name);
	void setMobileNumber(const string mobile_no);
	void setEmailAddress(const string email);
	void setAddress(const Address* const recieved_address);


	//Getters function
	string getFirstName() const;
	string getLastName() const;
	string getMobileNumber() const;
	string getEmailAddress() const;
	Address* getAddress() const;
};
