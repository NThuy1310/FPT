#include"SinhVien.h"

SinhVien::SinhVien()
{
	//
}
SinhVien::SinhVien(string ten, int tuoi, string lop)
{
	this->ten = ten;
	this->tuoi = tuoi;
	this->lop = lop;
}
SinhVien::~SinhVien()
{
	//
}

void SinhVien::setTen(string ten)
{
	this->ten = ten;
}
void SinhVien::setTuoi(int tuoi)
{
	this->tuoi = tuoi;
}
void SinhVien::setLop(string lop)
{
	this->lop = lop;
}

string SinhVien::getTen()
{
	return ten;
}
int SinhVien::getTuoi()
{
	return tuoi;
}
string SinhVien::getLop()
{
	return lop;
}
