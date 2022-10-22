#pragma once
#include<iomanip>
#include"IO.h"

enum MyChoice
{
	ADD_STUDENT = 1,
	RECRUIT_STUDENT = 2,
	SHOW_ALL_STUDENT = 3,
	EXIT = 0
};

class UI
{
private:
	IO view;
	bool run = 1;
public:
	UI();
	~UI();
};