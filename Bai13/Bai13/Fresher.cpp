#include"Fresher.h"

Fresher::Fresher()
{
	//
}
Fresher::Fresher(string Graduation_date, string Graduation_rank, string Education, string ID, string FullName, string BirthDay, string Phone, string Email, int Employee_type, vector<shared_ptr<Certificate>> ListCertificate)
	: Employee(ID, FullName, BirthDay, Phone, Email, Employee_type, ListCertificate)
{
	this->Graduation_date = Graduation_date;
	this->Graduation_rank = Graduation_rank;
	this->Education = Education;
}
Fresher::~Fresher()
{
	//
}

// setter
void Fresher::setGraduation_date(string Graduation_date)
{
	this->Graduation_date = Graduation_date;
}
void Fresher::setGraduation_rank(string Graduation_rank)
{
	this->Graduation_rank = Graduation_rank;
}
void Fresher::setEducation(string Education)
{
	this->Education = Education;
}

// getter
string Fresher::getGraduation_date()
{
	return Graduation_date;
}
string Fresher::getGraduation_rank()
{
	return Graduation_rank;
}
string Fresher::getEducation()
{
	return Education;
}