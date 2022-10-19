#pragma once

#include"KhachSan.h"

enum MyChoice
{
	THEM = 1,
	XOA = 2,
	TINH_TIEN = 3,
	HIEN_THI = 4,
	THOAT = 0
};


class UI
{
	KhachSan controller;
	bool run = 1;
public:
	UI();
	~UI();
};