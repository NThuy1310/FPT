#include"SinhVien.h"

SinhVien::SinhVien()
{
	//
}
SinhVien::SinhVien(string maSV, string ten, string ngaySinh, string namHoc, int diemDauVao, map<string, shared_ptr<KQHT>> dsKQHT)
{
	this->maSV = maSV;
	this->ten = ten;
	this->ngaySinh = ngaySinh;
	this->namHoc = namHoc;
	this->diemDauVao = diemDauVao;
	this->dsKQHT = dsKQHT;
}
SinhVien::~SinhVien()
{
	//
}

void SinhVien::setMASV(string maSV)
{
	this->maSV = maSV;
}
void SinhVien::setTen(string ten)
{
	this->ten = ten;
}
void SinhVien::setNgaySinh(string ngaySinh)
{
	this->ngaySinh = ngaySinh;
}
void SinhVien::setNamHoc(string namHoc)
{
	this->namHoc = namHoc;
}
void SinhVien::setDiemDauVao(int diemDauVao)
{
	this->diemDauVao = diemDauVao;
}
void SinhVien::setDS_KQHT(map<string, shared_ptr<KQHT>> dsKQHT)
{
	this->dsKQHT = dsKQHT;
}

string SinhVien::getMASV()
{
	return maSV;
}
string SinhVien::getTen()
{
	return ten;
}
string SinhVien::getNgaySinh()
{
	return ngaySinh;
}
string SinhVien::getNamHoc()
{
	return namHoc;
}
int SinhVien::getDiemDauVao()
{
	return diemDauVao;
}
map<string, shared_ptr<KQHT>> SinhVien::getDS_KQHT()
{
	return dsKQHT;
}
string SinhVien::getLoaiSV()
{
	return loaiSV;
}

double SinhVien::getDiemTB(string kiHoc)
{
	double diemTB = 0;
	if (dsKQHT.count(kiHoc))
	{
		diemTB = dsKQHT.find(kiHoc)->second->getTBMon1Ki();
	}
	return diemTB;
}