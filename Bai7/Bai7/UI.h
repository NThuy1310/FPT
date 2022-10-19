#pragma once
#include"QLCBGV.h"

enum MyChoice
{
	THOAT = 0,
	THEM_GV = 1,
	XOA_GV = 2,
	TINH_LUONG =3
};

class UI
{
private:
	bool run = 1;
	QLCBGV ql;
public:
	UI();
	~UI();
};