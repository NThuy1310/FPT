#pragma once
#include<iostream>
#include<string>

using namespace std;

class IO
{
public:
	string IN_HoTen();
	int IN_Tuoi();
	string IN_Cmnd();
	int IN_SoNgayThue();
	string IN_LoaiPhong();
	int IN_SoNguoi_1P();

	void OUT_TTNguoi(string, int, string);
	void OUT_SoNgayThue(int);
	void OUT_LoaiPhong(string);
	void OUT_SoNguoi_1P(int);
	void OUT_SoPhong(int);

	void OUT_NhapNguoi(int);
	void OUT_XuatNguoi(int);
	void OUT_XuatPhong(int);
	void OUT_XoaNguoi();
	void OUT_CMND_NotMatch();
	void OUT_TinhTien();
	void OUT_TienPhong(int);
	void OUT_TrungCMND();
};