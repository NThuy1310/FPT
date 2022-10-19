#pragma once
#include<iostream>
#include"SoPhuc.h"

enum MyChoice
{
	NHAP_2_SOPHUC = 1, HIEN_THI = 2, CONG_2SO = 3, NHAN_2SO = 4, THOAT = 0
};

class UI
{
private:
	bool run = 1;
public:
	UI();
	~UI();
};