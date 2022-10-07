#pragma once
#include<iostream>
#include<string>

using namespace std;

class ThiSinh
{
protected:
	int sbd;
	string ten;
	string diachi;
	int muc;
public:
	virtual void NhapTT();
	virtual void XuatTT();
	int getSBD();
};

void ThiSinh::NhapTT()
{
	cout << "Nhap So bao danh: " << endl;
	cin >> sbd;

	cout << "Nhap ho ten thi sinh: " << endl;
	cin.ignore();
	getline(cin, ten);

	cout << "Nhap dia chi: " << endl;
	cin.ignore();
	getline(cin, diachi);

	cout << "Nhap muc do uu tien (0,1,2): " << endl;
	cin >> muc;
}

void ThiSinh::XuatTT()
{
	cout << "SBD: " << sbd << endl;
	cout << "Ho va ten thi sinh: " << ten << endl;
	cout << "Dia chi: " << diachi << endl;
	cout << "Muc do uu tien: " << muc << endl;
}

int ThiSinh::getSBD()
{
	return sbd;
}