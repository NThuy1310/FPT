#pragma once
#include"IO.h"
#include"CheckInvalid.h"

enum MyChoice
{
	THEM_HO = 1,
	XOA_HO = 2,
	SUA_TT_HO = 3,
	HIEN_THI = 4,
	TINH_TIEN_DIEN = 5,
	THOAT_CT = 0
};

class UI
{
private:
	IO view;
	Invalid checkIn;
	bool run = 1;
public:
	UI();
	~UI();
};