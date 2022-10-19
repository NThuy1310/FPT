#pragma once
#include"QuanLyHocSinh.h"

enum MyChoice
{
	THEM_HS = 1,
	HIEN_THI_20 = 2,
	SO_LUONG_23 = 3,
	THOAT = 0
};

class UI
{
private:
	QuanLyHocSinh ql;
	bool run = 1;
public:
	UI();
	~UI();
};

