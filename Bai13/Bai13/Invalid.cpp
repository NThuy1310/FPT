#include"Invalid.h"

void Invalid::BirthDayException(int Year, int Month, int Day)
{
	int maxDate{};
	if (Year < 0 || (Month < LeastMonth && Month > MostMonth) || (Day < LeastDay && Day > MostDay))
	{
		throw "Invalid BirthDay";
	}

	switch (Month)
	{
	case January:
	case March:
	case May:
	case July:
	case September:
	case November:
		maxDate = 31;
		break;
	case February:
		if ((Year % 4 == 0 && Year % 100 != 0) || Year % 400 == 0)
		{
			maxDate = 29;
		}
		else
		{
			maxDate = 28;
		}
		break;
	case April:
	case June:
	case August:
	case October:
	case December:
		maxDate = 30;
		break;
	default:
		throw "Invalid Birthday";
		break;
	}

	if (maxDate < Day)
	{
		throw "Invalid Birthday";
	}
}
void Invalid::PhoneException(string Phone)
{
	if (Phone.length() != 10)
	{
		throw "Invalid Phone number";
	}
	else
	{
		for (int i = 0; i < Phone.length(); i++)
		{
			if (Phone[i] < '0' && Phone[i] > '9')
			{
				throw "Invalid Phone number";
			}
		}
	}
}
void Invalid::EmailException(string Email)
{
	bool flag = false;
	int count = 0;
	for (char& x : Email)
	{
		if (x == '@')
		{
			flag = true;
			count++;
		}
	}
	if (flag = false && count != 1)
	{
		throw "Invalid Email";
	}
}
void Invalid::FullNameException(string FullName)
{
	if (FullName == " ")
	{
		throw "Invalid Full Name";
	}
	else
	{
		for (char& x : FullName)
		{
			if ((x < 'A') || (x > 'Z' && x < 'a') || (x > 'z'))
			{
				if (x != ' ')
				{
					throw "Invalid Full Name";
				}
			}
		}
	}
}