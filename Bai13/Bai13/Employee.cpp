#include"Employee.h"
int Employee::Employee_count = 0;

Employee::Employee()
{
	//
}
Employee::Employee(string ID, string FullName, string BirthDay, string Phone, string Email, int Employee_type, vector<shared_ptr<Certificate>> ListCertificate)
{
	this->ID = ID;
	this->FullName = FullName;
	this->BirthDay = BirthDay;
	this->Phone = Phone;
	this->Email = Email;
	this->Employee_type = Employee_type;
	Employee_count++;
	this->ListCertificate = ListCertificate;
}
Employee::~Employee()
{
	//
}

//Setter
void Employee::setID(string ID)
{
	this->ID = ID;
}
void Employee::setFullName(string FullName)
{
	this->FullName = FullName;
}
void Employee::setBirthDay(string BirthDay)
{
	this->BirthDay = BirthDay;
}
void Employee::setPhone(string Phone)
{
	this->Phone = Phone;
}
void Employee::setEmail(string Email)
{
	this->Email = Email;
}
void Employee::setEmployee_type(int Employee_type)
{
	this->Employee_type = Employee_type;
}
void Employee::setListCertificate(vector<shared_ptr<Certificate>> ListCertificate)
{
	this->ListCertificate = ListCertificate;
}

//Getter
string Employee::getID()
{
	return ID;
}
string Employee::getFullName()
{
	return FullName;
}
string Employee::getBirthDay()
{
	return BirthDay;
}
string Employee::getPhone()
{
	return Phone;
}
string Employee::getEmail()
{
	return Email;
}
int Employee::getEmployee_type()
{
	return Employee_type;
}
int Employee::getEmployee_count()
{
	return Employee_count;
}
vector<shared_ptr<Certificate>> Employee::getListCertificate()
{
	return ListCertificate;
}

//add to ListCertificate
void Employee::addCertificate(shared_ptr<Certificate> Certificate)
{
	ListCertificate.push_back(Certificate);
}