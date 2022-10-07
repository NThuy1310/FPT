#pragma once
#include<iostream>
#include<string>
#include"TaiLieu.h"

using namespace std;

class Bao : public TaiLieu
{
private:
	int Ngay;
public:
	void NhapTL();
	void XuatTL();
};

void Bao::NhapTL()
{
	TaiLieu::NhapTL();
	TaiLieu::setLoaiTL("Bao");

	cout << "Ngay phat hanh: " << endl;
	cin >> Ngay;
}
void Bao::XuatTL()
{
	TaiLieu::XuatTL();
	cout << "Ngay phat hanh: " << Ngay << endl;
}