#include"Nguoi.h"

Nguoi::Nguoi()
{
	//
}
Nguoi::Nguoi(string ten, int tuoi, string ngheNghiep, string cmnd)
{
	this->ten = ten;
	this->tuoi = tuoi;
	this->ngheNghiep = ngheNghiep;
	this->cmnd = cmnd;
}
Nguoi::~Nguoi()
{
	//
}

void Nguoi::setTen(string ten)
{
	this->ten = ten;
}
void Nguoi::setTuoi(int tuoi)
{
	this->tuoi = tuoi;
}
void Nguoi::setNgheNgiep(string ngheNghiep)
{
	this->ngheNghiep = ngheNghiep;
}
void Nguoi::setCMND(string cmnd)
{
	this->cmnd = cmnd;
}

string Nguoi::getTen()
{
	return ten;
}
int Nguoi::getTuoi()
{
	return tuoi;
}
string Nguoi::getNgheNghiep()
{
	return ngheNghiep;
}
string Nguoi::getCMND()
{
	return cmnd;
}