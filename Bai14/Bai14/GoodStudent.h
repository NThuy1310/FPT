#pragma once
#include"Student.h"

class GoodStudent : public Student
{
private:
	double GPA;
	string bestRewardName;
public:
	GoodStudent();
	GoodStudent(double, string, string, string, string, string, string, string);
	~GoodStudent();

	void setGPA(double);
	void setBestRewardName(string);

	double getGPA();
	string getBestRewardName();
};