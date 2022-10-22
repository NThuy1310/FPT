#pragma once
#include"Employee.h"

class Fresher :public Employee
{
private:
	string Graduation_date;
	string Graduation_rank;
	string Education;
public:
	Fresher();
	Fresher(string, string, string, string, string, string, string, string, int, vector<shared_ptr<Certificate>>);
	~Fresher();

	// setter
	void setGraduation_date(string);
	void setGraduation_rank(string);
	void setEducation(string);

	// getter
	string getGraduation_date();
	string getGraduation_rank();
	string getEducation();
};