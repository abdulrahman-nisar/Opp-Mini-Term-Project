#include "ContactsBook.h"

void ContactsBook::add_contact()			//Add a new contact
{
	if (full())
	{
		resize_list(2*size_of_contacts);
	}
		inputContact(contacts_list[contacts_count]);
		contacts_count++;

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
	bool flag = false;
	 
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
				flag = true;			//A contactis found that can be merged
			}
		}
	}
	if (flag == true)
	{
		cout << "Merge successfully!" << endl;
		resize_list(size_of_contacts);

	}
	else
	{
		cout << "Not Any Contact to merge\n";
	}
	
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

	cout << "File loaded Successfully!" << endl;
	
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
