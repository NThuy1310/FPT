#pragma once
#include"Nguoi.h"
#include<map>

class HoGiaDinh
{
private:
	int soNha;
	int soThanhVien;
	map<string, Nguoi> dsThanhVien;
public:
	HoGiaDinh();
	HoGiaDinh(int, int);
	~HoGiaDinh();

	void setSoNha(int);
	void setSoThanhVien(int);
	void setDSThanhVien(map<string, Nguoi>);


	int getSoNha();
	int getSoThanhVien();
	map<string, Nguoi> getDSThanhVien();

	void addThanhVien(string, Nguoi);
	/*bool checkCMND(string);*/
};