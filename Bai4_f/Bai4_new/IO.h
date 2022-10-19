#pragma once
#include<iostream>
#include<string>

using namespace std;

class IO
{
public:
	string IN_HoTen();
	int IN_Tuoi();
	string IN_NgheNghiep();
	string IN_CMND();
	int IN_SoThanhVien();
	int IN_SoNha();
	int IN_SoHo();

	void OUT_TTNguoi(string, int, string, string);
	void OUT_SoThanhVien(int);
	void OUT_SoNha(int);
	void OUT_SoHo(int);

	void OUT_TrungCMND();
	void OUT_TrungSoNha();
	void OUT_NhapHo(int);
	void OUT_NhapNguoi(int);
	void OUT_XuatHo(int);
	void OUT_XuatNguoi(int);
	void OUT_KPTrong();
};