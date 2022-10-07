#pragma once
#include<iostream>
#include<string>
#include"ThiSinh.h"

using namespace std;

class C :public ThiSinh
{
private:
	string mon = "Van, Su, Dia";
public:
	void NhapTT();
	void XuatTT();
};

void C::NhapTT()
{
	ThiSinh::NhapTT();
}

void C::XuatTT()
{
	ThiSinh::XuatTT();
	cout << "Mon thi cua thi sinh la: Khoi C (" << mon << ")." << endl;
}