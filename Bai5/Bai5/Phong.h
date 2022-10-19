#pragma once
#include<map>
#include"Nguoi.h"

class Phong
{
private:
	int soNgayThue;
	string loaiPhong;
	map<string, Nguoi*> dsNguoiThue;
public:
	Phong();
	Phong(int, string);
	~Phong();

	void setSoNgayThue(int);
	void setLoaiPhong(string);
	void setDSNguoiThue(map<string, Nguoi*>);

	int getSoNgayThue();
	string getLoaiPhong();
	map<string, Nguoi*> getDSNguoiThue();

	void addNguoiThue(Nguoi* );
	void deleteNguoiThue(string);
};