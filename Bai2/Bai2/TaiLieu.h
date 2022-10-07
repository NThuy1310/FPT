#pragma once
#include <iostream>
#include <string>

using namespace std;

class TaiLieu
{
public:
	virtual void NhapTL();
	virtual void XuatTL();
	void setLoaiTL(string loaitailieu);
	string getLoaiTL();
	string getMaTL();

protected:
	string MaTaiLieu;
	string NhaXuatBan;
	int SoBanPhatHanh;
	string LoaiTL;
};

void TaiLieu::NhapTL()
{
	cout << "Ma tai lieu:" << endl;
	cin.ignore();
	getline(cin, MaTaiLieu);

	cout << "Nha xuat ban:" << endl;
	cin.ignore();
	getline(cin, NhaXuatBan);

	cout << "So luong ban phat hanh:" << endl;
	cin >> SoBanPhatHanh;
}
void TaiLieu::XuatTL()
{
	cout << "Loai tai lieu: " << LoaiTL << endl;
	cout << "Ma tai lieu: " << MaTaiLieu << endl;
	cout << "Ten nha xuat ban: " << NhaXuatBan << endl;
	cout << "So luong phat hanh: " << SoBanPhatHanh << endl;
}
void TaiLieu::setLoaiTL(string loaitailieu)
{
	LoaiTL = loaitailieu;
}
string TaiLieu::getLoaiTL()
{
	return LoaiTL;
}
string TaiLieu::getMaTL()
{
	return MaTaiLieu;
}