#include "Error Checking Functions.h"


bool isStringOnlyNumbers(const string str)			//CHecking a string that must contain only digits
{
	size_t length = str.length();			//Getting length of string

	for (size_t i = 0; i < length; i++)		//Iterating through the string
	{
		if (!(isdigit(str[i])))		//Checking that each character of string is a digit
		{
			cout << "Wrong Input. Only Digits are allowed. Enter again:-\n";
			return 1;
		}
	}
	return 0;
}
bool isStringOnlyAlphabets(const string str)		//CHecking a string that must contain only alphabets
{
	size_t length = str.length();				//Getting length of string

	for (size_t i = 0; i < length; i++)			//Iterating through the string
	{
		if (!(isalpha(str[i])))				//Cheking if the character at every index is not an character
		{
			cout << "Wrong Input. Only Alphbets are allowed. Enter again:-\n";
			return 1;
		}
	}
	return 0;
}


bool isLengthOfMobileNumberIs11(const string str)		//This function will check that the lenght of mobile number is 11
{
	if (str.length() != 11)
	{
		cout << "The Mobile Number Length must be 11 digits.Enter again:-\n";
		return 1;
	}
	return 0;
}


bool isEmpty(const string str)							//This functions will check for an empty string
{
	if (str.empty())
	{
		cout << "Field is Empty. Enter again:\n";
		return 1;
	}
	return 0;
}



void checkInput(int& n)	//This function will check for negative or invalid input in integer variable
{
	while (cin.fail() || n == INT_MAX || n == INT_MIN || n <= 0)
	{
		cin.clear();
		cin.ignore();
		cout << "Wrong Input. Enter a positive Number: ";
		cin >> n;
	}
}


bool checkSortingChoice(const int choice)		//This will check user choice for sorting
{
	if (choice != 1 && choice != 0)
	{
		cout << "Wrong Choice\n";
		return 0;
	}
	return 1;
}