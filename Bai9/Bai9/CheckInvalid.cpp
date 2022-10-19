#include"CheckInvalid.h"

bool Invalid::checkUnsignedInterger(string str)
{
	for (int i = 0; i < str.length(); i++)
	{
		if (!isdigit(str[i]))
		{
			return 1;
		}
	}
	return 0;
}

bool Invalid::checkName(string str)
{
	for (int i = 0; i < str.length(); i++)
	{
		if (isdigit(str[i]))
		{
			return 1;
		}
	}
	return 0;
}