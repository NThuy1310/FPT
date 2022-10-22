#include"CheckInput.h"

bool CheckInput::checkFullName(string name)
{
	try
	{
		if ((name.size() < 10) || (name.size() > 50))
		{
			throw MyCustomException("Invalid Full Name Exception");
			//return 1;
		}

		for (char& x : name)
		{
			if ((x < 'A') || (x > 'Z' && x < 'a') || (x > 'z'))
			{
				if (x != ' ')
				{
					throw MyCustomException("Invalid Full Name Exception");
					//return 1;
				}
			}
		}

		return 0;
	}
	catch (MyCustomException mce)
	{
		cout << "An error occurred." << endl;
		cout << mce.what() << endl;
		return 1;
	}
}

bool CheckInput::checkDoB(int Day, int Month, int Year)
{
	try
	{
		int maxDate{};
		if (Year < 0 || (Month < LeastMonth && Month > MostMonth) || (Day < LeastDay && Day > MostDay))
		{
			throw MyCustomException("Invalid DOB Exception");
			//return 1;
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
		{
			throw MyCustomException("Invalid DOB Exception");
			//return 1;
			break;
		}
		}

		if (maxDate < Day)
		{
			throw MyCustomException("Invalid DOB Exception");
			//return 1;
		}

		return 0;
	}
	catch (MyCustomException mce)
	{
		
		cout << "An error occurred." << endl;
		cout << mce.what() << endl;
		return 1;
	}
}

bool CheckInput::checkPhone(string phone)
{
	try
	{
		if (phone.size() != 10)
		{
			throw MyCustomException("Invalid Phone Number Exception");
			//return 1;
		}
		if (phone[0] != '0' && (int)phone.find("090") != 0 && (int)phone.find("098") != 0
			&& (int)phone.find("091") != 0 && (int)phone.find("031") != 0
			&& (int)phone.find("035") != 0 && (int)phone.find("038") != 0)
		{
			throw MyCustomException("Invalid PhoneNumber Exception");
			//return 1;
		}
		for (int i = 0; i < phone.length(); i++)
		{
			if (phone[i] < '0' && phone[i] > '9')
			{
				throw MyCustomException("Invalid Phone Number Exception");
				//return 1;
			}
		}

		return 0;
	}
	catch (MyCustomException mce)
	{
		cout << "An error occurred." << endl;
		cout << mce.what() << endl;
		return 1;
	}
}

bool CheckInput::checkSex(string StudentGender)
{
	try
	{
		if (StudentGender != "Nam" || "Nu" || "Khac" || "Male" || "Female" || "Other")
		{
			throw MyCustomException("Invalid Student Gender");
			//return 1;
		}
		return 0;
	}
	catch (MyCustomException mce)
	{
		cout << "An error occurred." << endl;
		cout << mce.what() << endl;
		return 1;
	}
}
bool CheckInput::checkGradeLevel(string GradeLevel)
{
	try
	{
		if (GradeLevel != "gioi" || "Gioi" || "good" || "Good" 
			|| "trung binh" || "Trung Binh" || "Trung binh" || "normal" || "Normal")
		{
			throw MyCustomException("Invalid Grade Level");
			//return 1;
		}
		return 0;
	}
	catch (MyCustomException mce)
	{
		cout << "An error occurred." << endl;
		cout << mce.what() << endl;
		return 1;
	}
}