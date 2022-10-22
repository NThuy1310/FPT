#pragma once
#include"Employee.h"
#include"Experience.h"
#include"Fresher.h"
#include"Intern.h"
#include<map>

class EmployeeManagement
{
private:
	map<string, shared_ptr<Employee>> ListEmployee;
public:
	void addExperience(int, string, string, string, string, string, string, int, vector<shared_ptr<Certificate>>);
	void addFresher(string, string, string, string, string, string, string, string, int, vector<shared_ptr<Certificate>>);
	void addIntern(string, string, string, string, string, string, string, string, int, vector<shared_ptr<Certificate>>);

	void modifyName(string, string);
	void modifyBirthDay(string, string);
	void modifyPhone(string, string);
	void modifyEmail(string, string);
	void modify_Add_Certificate(string, shared_ptr<Certificate>);


	void deleteEmpoyee(string);

	map<string, shared_ptr<Employee>> getListEmployee();
};