#pragma once
#include"KhachHang.h"
#include<memory>

class BienLai
{
private:
	int SoDienCu;
	int SoDienMoi;
	int TienDien;
	shared_ptr<KhachHang> TT_KhachHang;
public:
	BienLai();
	BienLai(int, int, int, shared_ptr<KhachHang>);
	~BienLai();

	void setSoDienCu(int);
	void setSoDienMoi(int);
	void setTienDien(int);
	void setTT_KhachHang(shared_ptr<KhachHang>);

	int getSoDienCu();
	int getSoDienMoi();
	int getTienDien();
	shared_ptr<KhachHang> getTT_KhachHang();
};