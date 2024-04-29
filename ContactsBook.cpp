#include "ContactsBook.h"

void ContactsBook::add_contact()			//Add a new contact
{
	if (full())
	{
		resize_list(2*size_of_contacts);
	}
		inputContact(contacts_list[contacts_count]);
		contacts_count++;

	/*
		- Check if the list is full, if it is full call the resize function
		- If list is not full add the contact to the end of the array 
		- (end means the place where last contact was inserted)
		- At start it will be 0th index as no contact has been inserted before so 
		- count is zero (contacts_count member)
		- Increment the count
		- As inserted successfully, return 1
	*/
}

int ContactsBook::total_contacts() const		//return total number of contacts added till now
{

	return contacts_count;
	
}


bool ContactsBook::full() const		//Return true if list is full, false otherwise
{
	if(contacts_count == size_of_contacts)
	{
		return true;
	}
	return false;
	
	
	
}

void ContactsBook::resize_list(const int size_for_new_array)
{
	size_of_contacts = size_for_new_array;

	Contact* temp_contacts_list = new Contact[size_of_contacts];
	

	for (int i = 0; i < contacts_count; i++)
	{
		temp_contacts_list[i].copy_contact(contacts_list[i]);
	}
	
	delete[] contacts_list;
	contacts_list = temp_contacts_list;

	/*
	//*	Here you will resize the contact list, see example code given in lab manual to see how to resize arrays
	*	You will allocate a temporary new array of double the current size and copy the contacts from 
	*       previous array to this array one by one, get the copy of each contact using copy_contact 
	*       function of Contact class
	*	Delete the previous array
	*	Assign the new temporary array to the contacts_list pointer
	*	Updated the this->size_of_contacts with new size
	*/
}

Contact* ContactsBook::search_contact(std::string first_name, std::string last_name)
{
	if (total_contacts() == 0)	//Checking for empty contact list
	{
		cout << "No Contatacts in Contact Book\n";
		return nullptr;
	}
	
	Contact* contact_ptr = new Contact;
	contact_ptr->setAddressToNull();
	contact_ptr->setAddress(nullptr);
	for (int i = 0; i < contacts_count; i++)
	{
		if (contacts_list[i].getFirstName() == first_name && contacts_list[i].getLastName() == last_name)
		{
			contact_ptr->copy_contact(contacts_list[i]);
			return contact_ptr;
		}
	}
	cout << "Not Found\n";
	return nullptr;//if no contact is found of first_name and last_name

	
}

Contact* ContactsBook::search_contact(std::string phone)
{
	if (total_contacts() == 0)	//Checking for empty contact list
	{
		cout << "No Contatacts in Contact Book\n";
		return nullptr;
	}
	Contact* contact_ptr = new Contact;
	contact_ptr->setAddressToNull();
	for (int i = 0; i < contacts_count; i++)
	{
		if ((contacts_list[i].getMobileNumber()) == phone)
		{
			contact_ptr->copy_contact(contacts_list[i]);
			return contact_ptr;
		}
	}

	cout << "Not Found\n";
	return nullptr;// if no contact is found of that phone number
	/*
	*	Remove this return nullptr; before writing your code
	*/
	
}

Contact* ContactsBook::search_contact(Address* address)
{
	if (total_contacts() == 0)	//Checking for empty contact list
	{
		cout << "No Contatacts in Contact Book\n";
		return nullptr;
	}
	Contact* contact_ptr = new Contact;
	contact_ptr->setAddressToNull();
	for (int i = 0; i < contacts_count; i++)
	{
		if (contacts_list[i].getAddress()->equals(address))
		{
			contact_ptr->copy_contact(contacts_list[i]);
			return contact_ptr;
		}
	}

	cout << "Not Found\n";
	return nullptr;//if no any contact is found of address
	/*
	*	Remove this return nullptr; before writing your code
	*/

}

//Initialize the contacts_list array, also initialize the size and count members accordingly
ContactsBook::ContactsBook(int size_of_list):size_of_contacts(size_of_list),contacts_count(0)
{
	contacts_list = new Contact[size_of_list];
	
	
}

//Destructor
ContactsBook::~ContactsBook()
{
	if (contacts_list != nullptr)
	{
		delete[] contacts_list;
	}
}

ContactsBook::ContactsBook() :
	size_of_contacts(0), contacts_count(0), contacts_list(nullptr)	//Default constructor
{

}

void ContactsBook::print_contacts_sorted(int choice)		//Make a copy of all contacts. Sort it then display it.
{
	
	
	if (checkSortingChoice(choice) == 1)
	{
		Contact* temp_contact_list = new Contact[contacts_count];
		for (int i = 0; i < contacts_count; i++)
		{
			temp_contact_list[i].copy_contact(contacts_list[i]);
		}
		sort_contacts_list(temp_contact_list, choice);

		for (int i = 0; i < contacts_count; i++)
		{
			temp_contact_list[i].printContact();
		}
		delete[] temp_contact_list;
	}
	
	/*
	*	Create a copy of this->contacts_list array here (do it by creating a new function that returns copy)
	*	Call the sort function sort_contacts_list to sort the newly created copy
	*	This copy is created to avoid changing the original insertion order of contact list
	*	Then print the contacts in following format:
	*	[First Name] [Last Name] [Mobile] [Email]
	*	Call the address print function to print address on next line
	*/
}

void ContactsBook::sort_contacts_list(Contact *contacts_list, int choice)		//Sort the contacts accorfing to first name or last name
{
	string name1, name2;		//Thses variables will store the first/last nsmes of both comparing contacts
	Contact temp;		//used in swapping
	for (int i = 0; i < contacts_count-1; i++)
	{
		for (int j = i+1; j < contacts_count; j++)
		{
			if (choice == 1)		//If the user choice is first name it will work other wise the else part
			{
				name1 = contacts_list[i].getFirstName();
				name2 = contacts_list[j].getFirstName();
			}
			else if (choice == 2)		//This part works if the user wants to sort by last name
			{
				name1 = contacts_list[i].getLastName();
				name2 = contacts_list[j].getLastName();
			}
			if (name1[0] > name2[0])
			{

				contacts_list[i].swapContact(contacts_list[j]);
			}
		}
	}
	
}

void ContactsBook::merge_duplicates()		//THis function will find and merge dublicates
{
	
	 
	if (contacts_count == 0 || contacts_count == 1)			//Checking for enough contacts to exist for merging
	{
		cout << "Can't perform merge.Either no contacts or only only one contact";
		return;
	}
	for (int i = 0; i < contacts_count-1; i++)
	{
		for (int j = i + 1; j < contacts_count; j++)
		{
			if (contacts_list[i].equals(contacts_list[j]))
			{
				contacts_list[j].swapContact(contacts_list[contacts_count - 1]);
				contacts_count--;
			}
		}
	}
	resize_list(size_of_contacts);
	
	// Implement this function that finds and merges all the duplicates
	// Duplicate means exact equal
	// If there are three copies of a Contact, then only one should remain
	// For example: If total contact are 10, and 2 contacts are same, after removing duplicates
	// 9 contacts will be left; and the this->contacts_count of list will 9
	// At the end display contacts merged, and count of merged contacts
}


void ContactsBook::load_from_file(std::string file_name) 
{
	
	ifstream input_file;
	input_file.open(file_name);


	if (!input_file)
	{

		cout << "Erorr in opening file for loading.\n";
		return;
	}
	string first_name, last_name, mobile_number, email_address;
	string house, street, city, country;
	
	
	if (!(input_file >> contacts_count))		//Checking if the file has anything at all
	{
		cout << "Error reading contacts count from file.\n";
		return;
	}

	this->size_of_contacts = contacts_count+5;
	this->contacts_list = new Contact[size_of_contacts];

	for (int i = 0; !(input_file.eof()); i++)
	{
		input_file >> first_name >> last_name >> mobile_number >> email_address;
		input_file >> house >> street >> city >> country;
		this->contacts_list[i].setFirstName(first_name);
		this->contacts_list[i].setLastName(last_name);
		this->contacts_list[i].setMobileNumber(mobile_number);
		this->contacts_list[i].setEmailAddress(email_address);

		this->contacts_list[i].getAddress()->setHouse(house);
		this->contacts_list[i].getAddress()->setStreet(street);
		this->contacts_list[i].getAddress()->setCity(city);
		this->contacts_list[i].getAddress()->setCountry(country);

	}

	input_file.close();

	
	/*
	*	Read contacts back from file in the same format	
	*	Read the contacts_count, and run a loop for this contacts_count and read the 
	*	contacts in the same format as you stored
	*	Add them to contact book (this.add_contact function can be used)
	*	Finally, close the file
	*/
}


void ContactsBook::save_to_file(std::string file_name) 
{
	if (contacts_count == 0)
	{
		cout << "Nothing to Store in file\n";
		return;
	}
	//Open a file for writing
	ofstream output_file(file_name);

	//Check if file is opened or not
	if (!output_file)
	{
		cout << "Error in opening file for writing!" << endl;
		return;
	}

	//Writing contacts_count in first line of file
	output_file << contacts_count << endl;


	//Write each contacts to the file
	for (int i = 0; i < contacts_count; i++)
	{

		//Writing contacts attributes in file
		output_file << contacts_list[i].getFirstName() << " "
			<< contacts_list[i].getLastName() << " "
			<< contacts_list[i].getMobileNumber() << " "
			<< contacts_list[i].getEmailAddress() << endl;


		//Writing address attribute	
		output_file << contacts_list[i].getAddress()->getHouse() << " "
			<< contacts_list[i].getAddress()->getStreet() << " "
			<< contacts_list[i].getAddress()->getCity() << " "
			<< contacts_list[i].getAddress()->getCountry() << endl;

	}

	//close the file
	output_file.close();

	cout << endl << "Contacts have been stored to the file." << endl;
	/*
	*	In this function you will store all the contacts to a file
	*	On first line store contacts_count
	*	On next lines store contacts in the following format:
	*       2 lines for each contact
	*       On oneline write contact attributes(except address) in comma separated format. On second line
	*	store address atributes in the same format
	*	first_name,last_name,mobile_number,email_address
	*	house,street,city,country
	*	Close the file
	*/
}

void ContactsBook::displayContacts() const
{
	if (contacts_count == 0)
	{
		cout << "No Contact to display\n";
		return;
	}
	for (int i = 0; i < contacts_count; i++)
	{
		contacts_list[i].printContact();

	}
}
