#include "Contact.h"


//The address of pointer in this class must get dynamic address every time

Contact::Contact(const string first_name, const string last_name, const string mobile_number, const string email_address, const  Address* const a_address)		//Constructor
{
	setFirstName(first_name);
	setLastName(last_name);
	setMobileNumber(mobile_number);
	setEmailAddress(email_address);
	this->address = a_address->copy_address();
}

Contact::Contact()
{
	address = new Address;
}

Contact::~Contact()
{
	if (address != nullptr)
	{
		delete address;
	}
}
	
					//--------------------------------------Setter functions----------------------------//
void Contact::setFirstName(const string f_name)
{
	first_name = f_name;
}
void Contact::setLastName(const string l_name)
{
	last_name = l_name;
}
void Contact::setMobileNumber(const string mobile_no)
{
	mobile_number = mobile_no;
}
void Contact::setEmailAddress(const string email)
{
	email_address = email;
}
void Contact::setAddress(const Address* const recieved_address)
{
	address = recieved_address->copy_address();
}
void Contact::setAddressToNull()			//This function is used to set address to null if we delete address due to any reason
{
	address = nullptr;
}


					//------------------------------------------Getter functions-------------------------//
string Contact::getFirstName() const
{
	return first_name;
}
string Contact::getLastName() const
{
	return last_name;
}
string Contact::getMobileNumber() const
{
	return mobile_number;
}
string Contact::getEmailAddress() const
{
	return email_address;
}
Address* Contact::getAddress() const		//This will return the refrencde of address. If you want a copy call the copy address function explicitly
{
	return address;
}

void Contact::copy_contact(const Contact& contact)	//It will recieve contact object and deep copy it to *this object
{
	if (address != nullptr)
	{
		delete this->address;
	}
	this->first_name = contact.first_name;
	 this->last_name = contact.last_name;
	 this->mobile_number = contact.mobile_number;
	this->email_address = contact.email_address;
	this->address = contact.address->copy_address();
}

bool Contact::equals(const Contact& contact) const		//Return 1 if two objects are equal
{
	if (first_name == contact.first_name && last_name == contact.last_name && mobile_number == contact.mobile_number && email_address == contact.email_address && address->equals(contact.address))
	{
		return true;
	}
	return false;
}


void Contact::swapContact(Contact& contact) {
	Contact temp; // Temporary contact to hold the values during swap


	temp.first_name = this->first_name;
	temp.last_name = this->last_name;
	temp.mobile_number = this->mobile_number;
	temp.email_address = this->email_address;

	Address* temp_address = this->address;
	this->address = contact.address;
	contact.address = temp_address;

	this->first_name = contact.first_name;
	this->last_name = contact.last_name;
	this->mobile_number = contact.mobile_number;
	this->email_address = contact.email_address;

	contact.first_name = temp.first_name;
	contact.last_name = temp.last_name;
	contact.mobile_number = temp.mobile_number;
	contact.email_address = temp.email_address;
}


void Contact::printContact()			//This function will print a contact
{

	cout << first_name << " " << last_name << " " << mobile_number << " " << email_address << endl;
	address->print_address();



}