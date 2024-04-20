#include "OutsideFunctionsDefinitions.h"


bool isStringOnlynumber(string& str)
{
	{
		size_t length = strlen(str);

		if (length < 11)
		{
			return 0;
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

}
