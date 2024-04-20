#include "Address.h"

//Constructor
Address::Address(std::string house, std::string street, std::string city, std::string country){}

     //--------------------------------------Setter functions----------------------------//

void Address::getHouse(std::string House)
{
	house = House;
}

void Address::getCity(std::string City)
{
	city = City; 
}

void Address::getCountry(std::string Country)
{
	country = Country;
}

void Address::getStreet(std::string Street)
{
	street = Street;
}

//--------------------------------------Getter functions----------------------------//
string Address::getHouse() const
{
	return house;
}
string Address::getStreet() const
{
	return street;

}
string Address::getCity() const
{
	return city;
}
string Address::getCountry() const
{
	return country;
}







/*
*	Implement a constructor that initializes all the address parts
*
*/


/*
*	Implement getter/setters for all the member variables of Address. Also declare them in the Address.h header file
*
*/



/*
*	Implement the equals function that takes an Address object and checks if it is equal to
*	current object refered by (this pointer)
*	Two addresses are equal if all the attributes of addresses are equal
*/
bool Address::equals(const Address& address)
{
	/*
	* Todo
	*/
	return false;
}

void Address::print_address()
{
	/*
	*	Print address on one line as
	*	House, Street, City, Country
	*/
}

Address Address::copy_address()
{
	/*
		return a copy of this
	*/
}
