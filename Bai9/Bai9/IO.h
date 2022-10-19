#pragma once
#include"QuanLyBienLai.h"
#include"CheckInvalid.h"
#include<iostream>

class IO
{
private:
	QLBL controller;
	Invalid invalid_Input;
public:
	void ThemHo();

	void XoaHo();

	void SuaTenHo();
	void SuaSoNha();
	void SuaMaSo();
	void SuaTTHo();

	void HienThi_BienLai();
	void HienThi_DS_BienLai();
	
	void TinhToan_TienDien();
};