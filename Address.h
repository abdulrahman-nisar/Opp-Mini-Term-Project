#pragma once
#include <iostream>
#include <string>
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

	bool equals(const Address& address);
	void print_address() const;
	Address* copy_address();


	Address(std::string house, std::string street, std::string city, std::string country);
	Address() {}
};
