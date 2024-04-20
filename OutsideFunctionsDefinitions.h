#pragma once
#include "Address.h"
#include"ContactsBook.h"


void inputAddress(Contact&  contact);		//This function will input value in address of a conact object
void inputContact(Contact& contact);		//This funtion will input values in a contact object



bool isStringOnlynumber(const string str);				//This functions will check the strings in which the user must enter numbers

bool isStringOnlyAlphbets(const string str);			//This functions will check the strings in which the user must enter alphbets