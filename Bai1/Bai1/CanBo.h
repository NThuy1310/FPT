#pragma once
#include<iostream>
#include<string>
using namespace std;
class CanBo
{
protected:
	string HoTen;
	int Tuoi;
	string GioiTinh;
	string DiaChi;
public:
	virtual void NhapTT();
	virtual void XuatTT();
	string get_HoTen();
};

void CanBo::NhapTT()
{
	cin.ignore();
	cout << "Ho Ten: " << endl;
	getline(cin, HoTen);

	cout << "Tuoi: " << endl;
	cin >> Tuoi;

	cout << "Gioi Tinh: " << endl;
	cin >> GioiTinh;

	cin.ignore();

	cout << "Dia Chi: " << endl;
	getline(cin, DiaChi);
}

void CanBo::XuatTT()
{
	cout << "Ho Ten: " << HoTen << endl;
	cout << "Tuoi: " << Tuoi << endl;
	cout << "Gioi Tinh: " << GioiTinh << endl;
	cout << "Dia Chi: " << DiaChi << endl;
}

string CanBo::get_HoTen()
{
	return HoTen;
}
