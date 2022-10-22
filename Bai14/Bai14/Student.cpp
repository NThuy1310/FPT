#include"Student.h"

Student::Student()
{
	//
}
Student::Student(string fullName, string doB, string sex, string phoneNumber, string universityName, string gradeLevel)
{
	this->fullName = fullName;
	this->doB = doB;
	this->sex = sex;
	this->phoneNumber = phoneNumber;
	this->universityName = universityName;
	this->gradeLevel = gradeLevel;
}
Student::~Student()
{
	//
}

void Student::setFullName(string fullName)
{
	this->fullName = fullName;
}
void Student::setDoB(string doB)
{
	this->doB = doB;
}
void Student::setSex(string sex)
{
	this->sex = sex;
}
void Student::setPhoneNumber(string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}
void Student::setUniversityName(string universityName)
{
	this->universityName = universityName;
}
void Student::setGradeLevel(string gradeLevel)
{
	this->gradeLevel = gradeLevel;
}

string Student::getFullName()
{
	return fullName;
}
string Student::getDoB()
{
	return doB;
}
string Student::getSex()
{
	return sex;
}
string Student::getPhoneNumber()
{
	return phoneNumber;
}
string Student::getUniversityName()
{
	return universityName;
}
string Student::getGradeLevel()
{
	return gradeLevel;
}