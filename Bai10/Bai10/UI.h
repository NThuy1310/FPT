#pragma once
#include"IO.h"

enum MyChoice
{
	THEM_VB = 1, SO_TU = 2, KI_TU_Aa = 3, CHUAN_HOA = 4, THOAT = 0
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