//The reason for making this as a separate file is that.
// It will only be used by main functions and no class can use this file.

#pragma once
#include "ContactsBook.h"


const string file_name_G = "ContactList.txt";
void inputAddress(Address* address);		//Always return an address of an address object. You can't use this functions on static objects
void inputContact(Contact& contact);		//This funtion will input values in a contact object


void displayContactBookMenu();//This function will display menu for Contact Book

void displaySearchMenu() ;//This function will display menu for how to search contact



void displayStartUpMenu();	//This funtion will display when the application is opened




