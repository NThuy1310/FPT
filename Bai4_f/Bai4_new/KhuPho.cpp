#include"KhuPho.h"

KhuPho::KhuPho()
{
	//
}
KhuPho::KhuPho(int soHo, map<int, HoGiaDinh> dsHoGiaDinh)
{
	this->soHo = soHo;
	this->dsHoGiaDinh = dsHoGiaDinh;
}
KhuPho::~KhuPho()
{
	//
}

void KhuPho::setSoHo(int soHo)
{
	this->soHo = soHo;
}
void KhuPho::setDSHoGiaDinh(map<int, HoGiaDinh> dsHoGiaDinh)
{
	this->dsHoGiaDinh = dsHoGiaDinh;
}

int KhuPho::getSoHo()
{
	return soHo;
}
map<int, HoGiaDinh> KhuPho::getDSHoGiaDinh()
{
	return dsHoGiaDinh;
}

void KhuPho::addHoGiaDinh(int soNha, HoGiaDinh hoGiaDinh)
{
	dsHoGiaDinh.insert({ soNha, hoGiaDinh });
}
//bool KhuPho::checkCMNDHo(string cmnd)
//{
//	for (auto i = dsHoGiaDinh.begin(); i != dsHoGiaDinh.end(); i++)
//	{
//		i->second.checkCMND(cmnd);
//	}
//}
//bool KhuPho::checkSoNha(int soNha)
//{
//	if (dsHoGiaDinh.count(soNha) == 1)
//	{
//		return 1;
//	}
//	return 0;
//}