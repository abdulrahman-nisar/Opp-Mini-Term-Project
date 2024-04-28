#pragma once
#include "Address.h"
#include "Contact.h"
#include"Functions Only Main Function Can Use.h"
#ifndef BASIC_LIB
#define BASIC_LIB
#include <iostream>
#include <string>
#endif // !BASIC_LIB


class ContactsBook {
private:
	Contact *contacts_list; // array of contacts
	int size_of_contacts;   // storage limit
	int contacts_count;     // total contacts currently stored, next contact will be 
						    // stored at this count plus 1 index

public:
	void add_contact();//done
	int total_contacts() const;//done

	//search all functions are done
	Contact* search_contact(std::string first_name, std::string last_name);		//Search function by first and last name
	Contact* search_contact(std::string phone);
	Contact* search_contact(Address* address);

	ContactsBook(int size_of_list);		//The constructor will create a new array of contacts for contact book object
	~ContactsBook();		//Destructor
	ContactsBook();			//Default constructor

	void print_contacts_sorted(int choice); // Only two choices first_name or last_name
	void merge_duplicates(); // This function finds and merges all the duplicates

	
	//This function loads contacts from the given file (see details in ContactsBook.cpp)
	void load_from_file(std::string file_name);

	//This functions saves contacts to a file
	void save_to_file(std::string file_name);
	void displayContacts() const;				//It will displays all the the contacts

private:
	bool full() const;			//Check if the contacts book is full or not
	void resize_list(int);		//This functions will resize list according to given choice
	void sort_contacts_list(Contact *contacts_list, int choice);		//This function will sort contacts according to first name or last name depending upon the user choice

	
};
