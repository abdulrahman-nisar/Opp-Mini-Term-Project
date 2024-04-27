#include "Address.h"

//Constructor
Address::Address(std::string House, std::string Street, std::string City, std::string Country) :house(House), street(Street), city(City), country(Country)
{
	setHouse(House);
	setStreet(Street);
	setCity(City);
	setCountry(Country);
}

     //--------------------------------------Setter functions----------------------------//

void Address::setHouse(std::string House)
{
	house = House;
}

void Address::setCity(std::string City)
{
	city = City; 
}

void Address::setCountry(std::string Country)
{
	country = Country;
}

void Address::setStreet(std::string Street)
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

bool Address::equals(const Address* address) const
{
	if ((city == address->city) && (house == address->house) && (street == address->street) && (country == address->country))
	{
		return true;
	}

	return false;
}

void Address::print_address() const
{
	cout << "House:" << house << ".  Street:" << street << ". City:" << city << ". Country:" << country << ". " << endl;
	
}

Address* Address::copy_address()
{
	Address* address;

	address = new Address;
	address->city = this->city;
	address->country = this->country;
	address->house = this->house;
	address->street = this->street;

	return address;

	
}
