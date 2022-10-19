#include "HocSinh.h"

HocSinh::HocSinh()
{
	//
}
HocSinh::HocSinh(string ten, int tuoi, string queQuan, string lop)
{
	this->ten = ten;
	this->tuoi = tuoi;
	this->queQuan = queQuan;
	this->lop = lop;
}
HocSinh::~HocSinh()
{
	//
}

void HocSinh::setTen(string ten)
{
	this->ten = ten;
}
void HocSinh::setTuoi(int tuoi)
{
	this->tuoi = tuoi;
}
void HocSinh::setQueQuan(string queQuan)
{
	this->queQuan = queQuan;
}
void HocSinh::setLop(string lop)
{
	this->lop = lop;
}

string HocSinh::getTen()
{
	return ten;
}
int HocSinh::getTuoi()
{
	return tuoi;
}
string HocSinh::getQueQuan()
{
	return queQuan;
}
string HocSinh::getLop() 
{
	return lop;
}