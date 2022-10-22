#include"GoodStudent.h"

GoodStudent::GoodStudent()
{
	//
}
GoodStudent::GoodStudent(double GPA, string bestRewardName, string fullName, string doB, string sex, string phoneNumber, string universityName, string gradeLevel)
	:Student(fullName, doB, sex, phoneNumber, universityName, gradeLevel)
{
	this->GPA = GPA;
	this->bestRewardName = bestRewardName;
}
GoodStudent::~GoodStudent()
{
	//
}

void GoodStudent::setGPA(double GPA)
{
	this->GPA = GPA;
}
void GoodStudent::setBestRewardName(string bestRewardName)
{
	this->bestRewardName = bestRewardName;
}

double GoodStudent::getGPA()
{
	return GPA;
}
string GoodStudent::getBestRewardName()
{
	return bestRewardName;
}