#pragma once
#include<iostream>
#include<string>

using namespace std;

class IO
{
public:
	string IN_Ten();
	int IN_Tuoi();
	string IN_QueQuan();
	string IN_MSGV();
	int IN_LuongCung();
	int IN_Thuong();
	int IN_Phat();

	void OUT_TTGV(string, int, string, string);

	void OUT_TrungMSGV();
	void OUT_XoaGV();
	void OUT_MSGV_NotMatch();
	void OUT_CalLuong();
	void OUT_NhapTTLuong();
	void OUT_LuongThuc(int);
};