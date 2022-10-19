#pragma once
#include"HoGiaDinh.h"

class KhuPho
{
private:
	int soHo;
	map<int, HoGiaDinh> dsHoGiaDinh;
public:
	KhuPho();
	KhuPho(int, map<int, HoGiaDinh>);
	~KhuPho();

	void setSoHo(int);
	void setDSHoGiaDinh(map<int, HoGiaDinh>);

	int getSoHo();
	map<int, HoGiaDinh> getDSHoGiaDinh();

	void addHoGiaDinh(int, HoGiaDinh);
	/*bool checkCMNDHo(string);*/
	/*bool checkSoNha(int);*/
};