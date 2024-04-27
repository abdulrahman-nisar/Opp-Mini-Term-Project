#include "Address.h"

//Constructor
Address::Address(std::string House, std::string Street, std::string City, std::string Country) :
	house(House), street(Street), city(City), country(Country)
{
}

     //--------------------------------------Setter functions----------------------------//

void Address::setHouse(const string House)
{
	house = House;
}

void Address::setCity(const string City)
{
	city = City; 
}

void Address::setCountry(const string Country)
{
	country = Country;
}

void Address::setStreet(const string Street)
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


//This function will return 1 if the caling address 
//and the passsed adresses are exact equal of each other
bool Address::equals(const Address* address) const	
{
	if ((city == address->city) && (house == address->house) && (street == address->street) && (country == address->country))
	{
		return true;
	}

	return false;
}

void Address::print_address() const		//print all attributes of an address object
{
	cout << "House:" << house << ".  Street:" << street << ". City:" << city << ". Country:" << country << ". " << endl;
	
}


//This function will return make a dynamic copy of the calling object and return it
Address* Address::copy_address() const
{
	Address* address;

	address = new Address;
	address->city = this->city;
	address->country = this->country;
	address->house = this->house;
	address->street = this->street;

	return address;

	
}
