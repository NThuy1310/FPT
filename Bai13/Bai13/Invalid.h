#pragma once
#include<string>

using namespace std;

enum Month 
{
	January = 1, February = 2, March = 3, April = 4, May = 5, June = 6,
	July = 7, August = 8, September = 9, October = 10, November = 11, December = 12,
	LeastMonth = 1, MostMonth = 12
};
enum Day 
{ 
	LeastDay = 1, MostDay = 31 
};

class Invalid
{
public:
	void BirthDayException(int, int, int);
	void PhoneException(string);
	void EmailException(string);
	void FullNameException(string);
};