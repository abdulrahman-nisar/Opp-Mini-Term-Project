#pragma once
#include"ContactsBook.h"


void inputAddress(Contact&  contact);		//This function will input value in address of a conact object
void inputContact(Contact& contact);		//This funtion will input values in a contact object
void displayContact(Contact& contact);		//This function will display the values of a contact object 


void checkStringToContainOnlyNumbers(std::string& str);
void checkStringToContainOnlyAlphbets(std::string& str);
