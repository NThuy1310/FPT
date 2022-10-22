#pragma once
#include"Employee.h"

class Intern : public Employee
{
private:
	string Majors;
	string Semester;
	string University_name;
public:
	Intern();
	Intern(string, string, string, string, string, string, string, string, int, vector<shared_ptr<Certificate>>);
	~Intern();

	// setter
	void setMajors(string);
	void setSemester(string);
	void setUniversity_name(string);

	// getter
	string getMajors();
	string getSemester();
	string getUniversity_name();
};