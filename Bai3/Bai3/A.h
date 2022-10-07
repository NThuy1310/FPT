#pragma once
#include<iostream>
#include<string>
#include"ThiSinh.h"

using namespace std;

class A :public ThiSinh
{
private:
	string mon = "Toan, Ly, Hoa";
public:
	void NhapTT();
	void XuatTT();
};

void A::NhapTT()
{
	ThiSinh::NhapTT();
}

void A::XuatTT()
{
	ThiSinh::XuatTT();
	cout << "Mon thi cua thi sinh la: Khoi A (" << mon << ")." <<endl;
}