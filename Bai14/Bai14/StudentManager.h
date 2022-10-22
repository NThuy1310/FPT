#pragma once
#include"GoodStudent.h"
#include"NormalStudent.h"
#include<map>
#include<vector>
#include<memory>
#include<algorithm>

class StudentManager
{
private:
	map<string, shared_ptr<Student>> ListStudent;
	map<string, shared_ptr<Student>> ListRecruit;
public:
	bool checkFullName(string);
	bool checkPhone(string);
	bool isGoodStudent(string);
	bool isNormalStudent(string);

	void addStudent(shared_ptr<Student>);
	void sortStudent(int);

	int getNumGoodStudent();
	int getNumNormalStudent();
	double getHighestGPA(map<string, shared_ptr<Student>>);
	double getHighestEntryTestScore(map<string, shared_ptr<Student>>);
	
	map<string, shared_ptr<Student>> getListStudent();
	map<string, shared_ptr<Student>> getListRecruit();
};