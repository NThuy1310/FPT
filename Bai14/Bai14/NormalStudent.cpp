#include"NormalStudent.h"

NormalStudent::NormalStudent()
{
	//
}
NormalStudent::NormalStudent(int englishScore, double entryTestScore, string fullName, string doB, string sex, string phoneNumber, string universityName, string gradeLevel)
	:Student(fullName, doB, sex, phoneNumber, universityName, gradeLevel)
{
	this->englishScore = englishScore;
	this->entryTestScore = entryTestScore;
}
NormalStudent::~NormalStudent()
{
	//
}

void NormalStudent::setEnglishScore(int englishScore)
{
	this->englishScore = englishScore;
}
void NormalStudent::setEntryTestScore(double entryTestScore)
{
	this->entryTestScore = entryTestScore;
}

int NormalStudent::getEnglishScore()
{
	return englishScore;
}
double NormalStudent::getEntryTestScore()
{
	return entryTestScore;
}