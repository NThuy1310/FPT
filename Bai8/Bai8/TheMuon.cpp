#include"TheMuon.h"

TheMuon::TheMuon()
{
	//
}
TheMuon::TheMuon(int maMuon, int ngayMuon, int hanTra, int soHieuSach, shared_ptr<SinhVien> sinhVien)
{
	this->maMuon = maMuon;
	this->ngayMuon = ngayMuon;
	this->hanTra = hanTra;
	this->soHieuSach = soHieuSach;
	this->sinhVien = sinhVien;
}
TheMuon::~TheMuon()
{
	//
}

void TheMuon::setMaMuon(int maMuon)
{
	this->maMuon = maMuon;
}
void TheMuon::setNgayMuon(int ngayMuon)
{
	this->ngayMuon = ngayMuon;
}
void TheMuon::setHanTra(int hanTra)
{
	this->hanTra = hanTra;
}
void TheMuon::setSoHieuSach(int soHieuSach)
{
	this->soHieuSach = soHieuSach;
}
void TheMuon::setSinhVien(shared_ptr<SinhVien> sinhVien)
{
	this->sinhVien = sinhVien;
}

int TheMuon::getMaMuon()
{
	return maMuon;
}
int TheMuon::getNgayMuon()
{
	return ngayMuon;
}
int TheMuon::getHanTra()
{
	return hanTra;
}
int TheMuon::getSoHieuSach()
{
	return soHieuSach;
}
shared_ptr<SinhVien> TheMuon::getSinhVien()
{
	return sinhVien;
}