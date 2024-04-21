#include "Error Checking Functions.h"


bool isStringOnlynumber(const string str)			//CHecking a string that must contain only digits
{
	size_t length = str.length();			//Getting length of string

	for (size_t i = 0; i < length; i++)		//Iterating through the string
	{
		if (!(isdigit(str[i])))		//Checking that each character of string is a digit
		{
			return 1;
		}
	}
	return 0;
}
bool isStringOnlyAlphbets(const string str)		//CHecking a string that must contain only alphabets
{
	size_t length = str.length();				//Getting length of string

	for (size_t i = 0; i < length; i++)			//Iterating through the string
	{
		if (!(isalpha(str[i])))				//Cheking if the character at every index is not an character
		{
			return 1;
		}
	}
	return 0;
}


bool isLengthOfMobileNumberIs11(const string str)		//This function will check that the lenght of mobile number is 11
{
	if (str.length() != 11)
	{
		return 1;
	}
	return 0;
}


