#pragma once
#include<iostream>
#include<string>
#include"TaiLieu.h"

using namespace std;

class Sach : public TaiLieu
{
private:
	string TacGia;
	int SoTrang;
public:
	void NhapTL();
	void XuatTL();
};

void Sach::NhapTL()
{
	TaiLieu::NhapTL();
	TaiLieu::setLoaiTL("Sach");

	cout << "Ten tac gia: " << endl;
	cin.ignore();
	getline(cin, TacGia);

	cout << "So trang sach:" << endl;
	cin >> SoTrang;
}
void Sach::XuatTL()
{
	TaiLieu::XuatTL();
	cout << "Ten tac gia: " << TacGia << endl;
	cout << "So trang: " << SoTrang << endl;
}