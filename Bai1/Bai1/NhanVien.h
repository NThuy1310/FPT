#pragma once
#include<iostream>
#include<string>
#include"CanBo.h"
using namespace std;

class NhanVien : public CanBo
{
	string CongViec;
public:
	void NhapTT();
	void XuatTT();
};

void NhanVien::NhapTT()
{
	CanBo::NhapTT();
	cout << "Cong Viec: " << endl;
	getline(cin, CongViec);
}

void NhanVien::XuatTT()
{
	CanBo::XuatTT();
	cout << "Cong viec: " << CongViec << endl;
	cout << "Can bo Nhan Vien" << endl;
}
