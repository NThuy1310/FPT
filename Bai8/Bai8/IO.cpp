#include"IO.h"

int IO::IN_MaMuon()
{
	int maMuon;
	cout << "Nhap ma muon: " << endl;
	cin >> maMuon;
	return maMuon;
}
int IO::IN_NgayMuon()
{
	int ngayMuon;
	cout << "Nhap ngay muon: " << endl;
	cin >> ngayMuon;
	return ngayMuon;
}
int IO::IN_HanTra()
{
	int hanTra;
	cout << "Nhap han tra: " << endl;
	cin >> hanTra;
	return hanTra;
}
int IO::IN_SoHieuSach()
{
	int soHieuSach;
	cout << "Nhap so hieu sach: " << endl;
	cin >> soHieuSach;
	return soHieuSach;
}
string IO::IN_TenHS()
{
	string ten;
	cout << "Nhap vao ho ten hoc sinh: " << endl;
	getline(cin >> ws, ten);
	return ten;
}
int IO::IN_TuoiHS()
{
	int tuoi;
	cout << "Nhap tuoi: " << endl;
	cin >> tuoi;
	return tuoi;
}
string IO::IN_LopHS()
{
	string lop;
	cout << "Nhap lop: " << endl;
	getline(cin >> ws, lop);
	return lop;
}

void IO::OUT_TTTheMuon(int maMuon, int ngayMuon, int hanTra, int soHieuSach, string ten, int tuoi, string lop)
{
	cout << "Ma muon: " << maMuon << endl;
	cout << "Ngay muon: " << ngayMuon << endl;
	cout << "Han tra: " << hanTra << endl;
	cout << "So hieu sach: " << soHieuSach << endl;
	cout << "Ho ten hoc sinh: " << ten << endl;
	cout << "Tuoi: " << tuoi << endl;
	cout << "Lop: " << lop << endl;
	cout << endl;
}

void IO::OUT_AddThe()
{
	cout << "Nhap thong tin the muon: " << endl;
}
void IO::OUT_Trung_MaMuon()
{
	cout << "Ma muon the bi trung. Hay nhap ma muon chinh xac cua hoc sinh." << endl;
}
void IO::OUT_DeleteThe()
{
	cout << "Nhap vao ma the muon can xoa: " << endl;
}
void IO::OUT_Ma_NotMatch()
{
	cout << "Ma muon the khong ton tai." << endl;
}
void IO::OUT_Result_Delete()
{
	cout << "Da xoa thanh cong the" << endl;
}
void IO::OUT_ShowThe(int i)
{
	cout << "Thong tin the muon thu " << i + 1 << endl;
}