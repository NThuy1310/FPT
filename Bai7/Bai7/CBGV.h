#pragma once
#include"Nguoi.h"

class CBGV:public Nguoi
{
private:
	int luongCung;
	int thuong;
	int phat;
	int luongThuc;
public:
	CBGV();
	CBGV(string, int, string, string);
	CBGV(string, int, string, string, int, int, int, int);
	~CBGV();

	void setLuongCung(int);
	void setThuong(int);
	void setPhat(int);
	void setLuongThuc(int);

	int getLuongCung();
	int getThuong();
	int getPhat();
	int getLuongThuc();

};