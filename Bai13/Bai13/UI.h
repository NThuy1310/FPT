#pragma once
#include"IO.h"
#include"Invalid.h"

enum MyFunc
{
	ADD = 1, EDIT = 2, DELETE = 3, SEARCH = 4, EXIT =0
};
enum AddChoice
{
	ADD_EXPERIENCE = 0, ADD_FRESHER = 1, ADD_INTERN = 2, ADD_EXIT = 3
};
enum EditChoice
{
	EDIT_NAME = 1, EDIT_BIRTHDAY = 2, EDIT_EMAIL = 3, EDIT_PHONE = 4, EDIT_CERTIFICATE = 5, EDIT_EXIT = 0
};

class UI
{
private:
	IO view;
	bool run = 1;
public:
	UI();
	~UI();

	void UI_addEmployee();
	void UI_editEmployee();
};