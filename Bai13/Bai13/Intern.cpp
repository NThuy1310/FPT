#include"Intern.h"

Intern::Intern()
{
	//
}
Intern::Intern(string Majors, string Semester, string University_name, string ID, string FullName, string BirthDay, string Phone, string Email, int Employee_type, vector<shared_ptr<Certificate>> ListCertificate)
	: Employee(ID, FullName, BirthDay, Phone, Email, Employee_type, ListCertificate)
{
	this->Majors = Majors;
	this->Semester = Semester;
	this->University_name = University_name;
}
Intern::~Intern()
{
	//
}

// setter
void Intern::setMajors(string Majors)
{
	this->Majors = Majors;
}
void Intern::setSemester(string Semester)
{
	this->Semester = Semester;
}
void Intern::setUniversity_name(string University_name)
{
	this->University_name = University_name;
}

// getter
string Intern::getMajors()
{
	return Majors;
}
string Intern::getSemester()
{
	return Semester;
}
string Intern::getUniversity_name()
{
	return University_name;
}