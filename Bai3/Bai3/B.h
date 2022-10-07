#pragma once
#include<iostream>
#include<string>
#include"ThiSinh.h"

using namespace std;

class B :public ThiSinh
{
private:
	string mon = "Toan, Hoa, Sinh";
public:
	void NhapTT();
	void XuatTT();
};

void B::NhapTT()
{
	ThiSinh::NhapTT();
}

void B::XuatTT()
{
	ThiSinh::XuatTT();
	cout << "Mon thi cua thi sinh la: Khoi B (" << mon << ")." << endl;
}