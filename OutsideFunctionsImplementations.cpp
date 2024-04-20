#include "OutsideFunctionsDefinitions.h"


bool isStringOnlynumber(const string str)
{
	{
		size_t length = str.length();

		if (length < 11)
		{
			return 1;
		}
		for (size_t i = 0; i < length; i++)
		{
			if (str[i] < 48 || str[i] > 57)
			{
				return 1;
			}
			return 0;
		}

	}
}
bool isStringOnlyAlphbets(string& str)
{
	return 1;
}
