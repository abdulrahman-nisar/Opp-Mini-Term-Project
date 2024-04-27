#pragma once
#include "Error Checking Functions.h"
using namespace std;
class Address {
private:
	std::string house;
	std::string street;
	std::string city;
	std::string country;
	
public:

	//Setters
	void setHouse(const std::string);
	void setStreet(const std::string);
	void setCity(const std::string);
	void setCountry(const std::string);

	//Getters
	string getHouse() const;
	string getStreet() const;
	string getCity() const;
	string getCountry() const;

	bool equals(const Address* address) const;		//This function will return 1 if the caling address 
													//and the passsed adresses are exact equal of each other
	
	void print_address() const;			//print all attributes of an address object
	
	Address* copy_address() const;	//This function will return make a dynamic copy of the calling object and return it


	Address(const string house, const string street, const string city, const string country);
	Address() {}
	~Address() {};
};
