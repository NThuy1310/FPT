#pragma once
#include"Employee.h"

class Experience :public Employee
{
private:
	int ExpInYear;
	string ProSkill;
public:
	Experience();
	Experience(int, string, string, string, string, string, string, int, vector<shared_ptr<Certificate>>);
	~Experience();

	// setter
	void setExpInYear(int);
	void setProSkill(string);

	// getter
	int getExpInYear();
	string getProSkill();
};