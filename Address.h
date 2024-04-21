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
	void setHouse(std::string);
	void setStreet(std::string);
	void setCity(std::string);
	void setCountry(std::string);

	//Getters
	string getHouse() const;
	string getStreet() const;
	string getCity() const;
	string getCountry() const;

	bool equals(Address* address) const;
	void print_address() const;
	Address* copy_address();


	Address(std::string house, std::string street, std::string city, std::string country);
	Address() {}
};
