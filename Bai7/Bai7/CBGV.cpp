#include"CBGV.h"

CBGV::CBGV()
{
	//
}
CBGV::CBGV(string ten, int tuoi, string queQuan, string msgv) :Nguoi(ten, tuoi, queQuan, msgv)
{
	//
}
CBGV::CBGV(string ten, int tuoi, string queQuan, string msgv, int luongCung, int thuong, int phat, int luongThuc)
	: Nguoi(ten, tuoi, queQuan, msgv)
{
	this->luongCung = luongCung;
	this->thuong = thuong;
	this->phat = phat;
	this->luongThuc = luongThuc;
}
CBGV::~CBGV()
{
	//
}

void CBGV::setLuongCung(int luongCung)
{
	this->luongCung = luongCung;
}
void CBGV::setThuong(int thuong)
{
	this->thuong = thuong;
}
void CBGV::setPhat(int phat)
{
	this->phat = phat;
}
void CBGV::setLuongThuc(int luongThuc)
{
	this->luongThuc = luongThuc;
}

int CBGV::getLuongCung()
{
	return luongCung;
}
int CBGV::getThuong()
{
	return thuong;
}
int CBGV::getPhat()
{
	return phat;
}
int CBGV::getLuongThuc()
{
	return luongThuc;
}