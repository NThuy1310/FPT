#include"Nguoi.h"

Nguoi::Nguoi()
{
	//
}
Nguoi::Nguoi(string ten, int tuoi, string queQuan, string msgv)
{
	this->ten = ten;
	this->tuoi = tuoi;
	this->queQuan = queQuan;
	this->msgv = msgv;
}
Nguoi::~Nguoi()
{

}

void Nguoi::setTen(string ten)
{
	this->ten = ten;
}
void Nguoi::setTuoi(int tuoi)
{
	this->tuoi = tuoi;
}
void Nguoi::setQueQuan(string queQuan)
{
	this->queQuan = queQuan;
}
void Nguoi::setMSGV(string msgv)
{
	this->msgv = msgv;
}

string Nguoi::getTen()
{
	return ten;
}
int Nguoi::getTuoi()
{
	return tuoi;
}
string Nguoi::getQueQuan()
{
	return queQuan;
}
string Nguoi::getMSGV()
{
	return msgv;
}
