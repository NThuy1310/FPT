#include "HoGiaDinh.h"

HoGiaDinh::HoGiaDinh()
{
	//
}
HoGiaDinh::HoGiaDinh(int soNha, int soThanhVien)
{
	this->soNha = soNha;
	this->soThanhVien = soThanhVien;
}
HoGiaDinh::~HoGiaDinh()
{
	//
}

void HoGiaDinh::setSoNha(int soNha)
{
	this->soNha = soNha;
}
void HoGiaDinh::setSoThanhVien(int soThanhVien)
{
	this->soThanhVien = soThanhVien;
}
void HoGiaDinh::setDSThanhVien(map<string, Nguoi> dsThanhVien)
{
	this->dsThanhVien = dsThanhVien;
}

int HoGiaDinh::getSoNha()
{
	return soNha;
}
int HoGiaDinh::getSoThanhVien()
{
	return soThanhVien;
}
map<string, Nguoi> HoGiaDinh::getDSThanhVien()
{
	return dsThanhVien;
}

void HoGiaDinh::addThanhVien(string cmnd, Nguoi thanhVien)
{
	dsThanhVien.insert({ cmnd, thanhVien });
}
//bool HoGiaDinh::checkCMND(string cmnd)
//{
//	if (dsThanhVien.count(cmnd) == 1)
//	{
//		return 1;
//	}
//	return 0;
//}