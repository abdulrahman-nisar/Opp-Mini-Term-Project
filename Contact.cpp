#include "Contact.h"


Contact::Contact(std::string first_name, std::string last_name, std::string mobile_number, std::string email_address, Address* address)		//Constructor
{
	
}
	
					//--------------------------------------Setter functions----------------------------//
void Contact::setFirstName(string f_name)
{
	first_name = f_name;
}
void Contact::setLastName(string l_name)
{
	last_name = l_name;
}
void Contact::setMobileNumber(string mobile_no)
{
	mobile_number = mobile_no;
}
void Contact::setEmailAddress(string email)
{
	email_address = email;
}
void Contact::setAddress(Address* recieved_address)
{
	address = recieved_address->copy_address();
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
Address* Contact::getAddress() const
{
	return address->copy_address();
}

/*
*	Implement a constructor that initializes all the Contact parts, including address. Call the setter to set values
*	as they have the logic to check correct input
*	Declaration is given in Contact.h
*/


/*
*	Implement getter/setters for all the member variables of Contact. Also declare them in the Contact.h header file
*	In each setter, do not set value if string is empty ("" 0 size). 
*   Check in phone number setter, Phone number must be 11 digits
*/



/*
*	Implement the equals function(as declared in header file) that takes a 
*   Contact object and checks if it is equal to current object refered by (this pointer). 
*   Compare all the attributes.
*   For comparing address of contact you can call the equals function of the Address object;
*   For example: this.address.equals
*/

Contact* Contact::copy_contact()
{

}

bool Contact::equals(const Contact contact)	const		//Return 1 if two objects are equal
{
	if (first_name == contact.first_name && last_name == contact.last_name && mobile_number == contact.mobile_number && email_address == contact.email_address && address->equals(contact.address)
	{
		return 1;
	}
	return 0;
}