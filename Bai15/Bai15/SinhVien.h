#pragma once
#include"KQHT.h"
#include<string>
#include<map>
#include<memory>
using namespace std;

class SinhVien
{
protected:
	string maSV;
	string ten;
	string ngaySinh;
	string namHoc;
	int diemDauVao;
	map<string, shared_ptr<KQHT>> dsKQHT;
	string loaiSV;
public:
	SinhVien();
	SinhVien(string, string, string, string, int, map<string, shared_ptr<KQHT>>);
	~SinhVien();

	virtual void setMASV(string);
	virtual void setTen(string);
	virtual void setNgaySinh(string);
	virtual void setNamHoc(string);
	virtual void setDiemDauVao(int);
	virtual void setDS_KQHT(map<string, shared_ptr<KQHT>>);

	virtual string getMASV();
	virtual string getTen();
	virtual string getNgaySinh();
	virtual string getNamHoc();
	virtual int getDiemDauVao();
	virtual map<string, shared_ptr<KQHT>> getDS_KQHT();
	virtual string getLoaiSV();
	virtual double getDiemTB(string);
};