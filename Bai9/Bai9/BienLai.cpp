#include"BienLai.h"

BienLai::BienLai()
{
	//
}
BienLai::BienLai(int SoDienCu, int SoDienMoi, int TienDien, shared_ptr<KhachHang> TT_KhachHang)
{
	this->SoDienCu = SoDienCu;
	this->SoDienMoi = SoDienMoi;
	this->TienDien = TienDien;
	this->TT_KhachHang = TT_KhachHang;
}
BienLai::~BienLai()
{
	//
}

void BienLai::setSoDienCu(int)
{
	this->SoDienCu = SoDienCu;
}
void BienLai::setSoDienMoi(int)
{
	this->SoDienMoi = SoDienMoi;
}
void BienLai::setTienDien(int)
{
	this->TienDien = TienDien;
}
void BienLai::setTT_KhachHang(shared_ptr<KhachHang>)
{
	this->TT_KhachHang = TT_KhachHang;
}

int BienLai::getSoDienCu()
{
	return SoDienCu;
}
int BienLai::getSoDienMoi()
{
	return SoDienMoi;
}
int BienLai::getTienDien()
{
	return TienDien;
}
shared_ptr<KhachHang> BienLai::getTT_KhachHang()
{
	return TT_KhachHang;
}