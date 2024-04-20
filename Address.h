#pragma once
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;
using std::endl;

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
	string getHouse();
	string getStreet();
	string getCity();
	string getCountry();

	bool equals(const Address& address);
	void print_address();
	Address copy_address();

	Address(std::string house, std::string street, std::string city, std::string country);
	Address() {}
};
