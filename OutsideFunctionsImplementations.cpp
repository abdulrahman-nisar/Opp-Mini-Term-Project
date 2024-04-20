#include "OutsideFunctionsDefinitions.h"


bool isStringOnlynumber(const string str)
{
	size_t length = str.length();			//Getting length of string

	if (length < 11)			//Cheking if the string exceeds lenght of 11 digits beacuse we will be checkin only contact number 
	{
		return 1;
	}
	for (size_t i = 0; i < length; i++)
	{
		if (!(isdigit(str[i])))
		{
			return 1;
		}
		return 0;
	}
}
bool isStringOnlyAlphbets(const string str)
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
