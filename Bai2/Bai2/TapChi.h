#pragma once
#include<iostream>
#include<string>
#include"TaiLieu.h"

using namespace std;

class TapChi : public TaiLieu
{
private:
	int So;
	int Thang;
public:
	void NhapTL();
	void XuatTL();
};

void TapChi::NhapTL()
{
	TaiLieu::NhapTL();
	TaiLieu::setLoaiTL("Tap Chi");

	cout << "So phat hanh: " << endl;
	cin >> So;

	cout << "Thang phat hanh:" << endl;
	cin >> Thang;
}
void TapChi::XuatTL()
{
	TaiLieu::XuatTL();
	cout << "So phat hanh: " << So << endl;
	cout << "Thang phat hanh: " << Thang << endl;
}