#pragma once
#include"EmployeeManagement.h"
#include"Invalid.h"
#include<iostream>

class IO
{
private:
	EmployeeManagement Controller;
	Invalid checkINPUT;
public:
	bool checkID(string);

	string IN_ID();
	string IN_Name();
	string IN_BirthDay();
	string IN_Phone();
	string IN_Email();
	int IN_Employee_Type();
	vector<shared_ptr<Certificate>> IN_ListCertificate();

	void OUT_Employee(string, string, string, string, string, int, vector<shared_ptr<Certificate>>);

	void add_Experience();
	void add_Fresher();
	void add_Intern();

	void modify_Name();
	void modify_BirthDay();
	void modify_Phone();
	void modify_Email();
	void modify_Add_Certificate();


	void delete_Empoyee();

	void find_Employee();
};