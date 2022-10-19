#include"Phong.h"

Phong::Phong()
{
	//
}
Phong::Phong(int soNgayThue, string loaiPhong)
{
	this->soNgayThue = soNgayThue;
	this->loaiPhong = loaiPhong;
}
Phong::~Phong()
{
	//
}

void Phong::setSoNgayThue(int soNgayThue)
{
	this->soNgayThue = soNgayThue;
}
void Phong::setLoaiPhong(string loaiPhong)
{
	this->loaiPhong = loaiPhong;
}
void Phong::setDSNguoiThue(map<string, Nguoi*> dsNguoiThue)
{
	this->dsNguoiThue = dsNguoiThue;
}

int Phong::getSoNgayThue()
{
	return soNgayThue;
}
string Phong::getLoaiPhong()
{
	return loaiPhong;
}
map<string, Nguoi*> Phong::getDSNguoiThue()
{
	return dsNguoiThue;
}

void Phong::addNguoiThue(Nguoi* ng)
{
	pair<string, Nguoi*> pa(ng->getCMND(), ng);
	dsNguoiThue.insert(pa);

	pa.second = nullptr;
	delete pa.second;
}
void Phong::deleteNguoiThue(string cmnd)
{
	dsNguoiThue.erase(cmnd);
}
