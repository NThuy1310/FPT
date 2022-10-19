#pragma once
#include"QuanLyTheMuon.h"

enum MyChoice
{
	THEM_THE = 1,
	XOA_THE = 2,
	HIEN_THI = 3,
	THOAT = 0
};

class UI
{
private:
	QLTM ql;
	bool run = 1;
public:
	UI();
	~UI();
};