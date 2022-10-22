#include"Experience.h"

Experience::Experience()
{
	//
}
Experience::Experience(int ExpInYear, string ProSkill, string ID, string FullName, string BirthDay, string Phone, string Email, int Employee_type, vector<shared_ptr<Certificate>> ListCertificate)
	: Employee(ID, FullName, BirthDay, Phone, Email, Employee_type, ListCertificate)
{
	this->ExpInYear = ExpInYear;
	this->ProSkill = ProSkill;
}
Experience::~Experience()
{
	//
}

// setter
void Experience::setExpInYear(int ExpInYear)
{
	this->ExpInYear = ExpInYear;
}
void Experience::setProSkill(string ProSkill)
{
	this->ProSkill = ProSkill;
}

// getter
int Experience::getExpInYear()
{
	return ExpInYear;
}
string Experience::getProSkill()
{
	return ProSkill;
}