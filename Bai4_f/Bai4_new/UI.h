#pragma once
#include"QLKP.h"

enum MyChoice
{
	THOAT = 0,
	NHAP_KHUPHO = 1,
	HIEN_THI = 2
};

class UI
{
private:
	QuanLyKhuPho qlkp;
	bool run = true;
public:
	UI();
	~UI();
};