#pragma once
#include"Student.h"

class NormalStudent : public Student
{
private:
	int englishScore;
	double entryTestScore;
public:
	NormalStudent();
	NormalStudent(int, double, string, string, string, string, string, string);
	~NormalStudent();

	void setEnglishScore(int);
	void setEntryTestScore(double);

	int getEnglishScore();
	double getEntryTestScore();
};