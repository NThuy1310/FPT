#pragma once
#include<iostream>
#include"StudentManager.h"
#include"CheckInput.h"

class IO
{
private:
	StudentManager controll;
	CheckInput isInvalidInput;
public:
	void addStudent();
	void selectCandidate();
	void showStudentInfo();

};