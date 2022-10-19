#pragma once
#include<memory>
#include "SinhVien.h"

class TheMuon
{
	int maMuon, ngayMuon, hanTra, soHieuSach;
	shared_ptr<SinhVien> sinhVien;
public:
	TheMuon();
	TheMuon(int, int, int, int, shared_ptr<SinhVien>);
	~TheMuon();

	void setMaMuon(int);
	void setNgayMuon(int);
	void setHanTra(int);
	void setSoHieuSach(int);
	void setSinhVien(shared_ptr<SinhVien>);

	int getMaMuon();
	int getNgayMuon();
	int getHanTra();
	int getSoHieuSach();
	shared_ptr<SinhVien> getSinhVien();
};