#pragma once
#include<iostream>
#include<string>
#include"CanBo.h"
using namespace std;

class CongNhan : public CanBo
{
	int Bac = 0;
public:
	void NhapTT();
	void XuatTT();
};

void CongNhan::NhapTT()
{
	CanBo::NhapTT();
	cout << "Cap Bac: " << endl;
	cin >> Bac;
}

void CongNhan::XuatTT()
{
	CanBo::XuatTT();
	cout << "Cap Bac: " << Bac << endl;
	cout << "Can bo Cong Nhan" << endl;
}
