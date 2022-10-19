#include"SoPhuc.h"

SoPhuc::SoPhuc()
{
	PhanThuc = 0;
	PhanAo = 0;
}
SoPhuc::SoPhuc(double PhanThuc, double PhanAo)
{
	this->PhanThuc = PhanThuc;
	this->PhanAo = PhanAo;
}
SoPhuc::~SoPhuc()
{
	//
}

void SoPhuc::setPhanThuc(double PhanThuc)
{
	this->PhanThuc = PhanThuc;
}
void SoPhuc::setPhanAo(double PhanAo)
{
	this->PhanAo = PhanAo;
}

double SoPhuc::getPhanThuc()
{
	return PhanThuc;
}
double SoPhuc::getPhanAo()
{
	return PhanAo;
}

SoPhuc SoPhuc::operator+ (SoPhuc SP1)
{
	SoPhuc SP2;
	SP2.PhanThuc = this->PhanThuc + SP1.PhanThuc;
	SP2.PhanAo = this->PhanAo + SP1.PhanAo;
	return SP2;
}
SoPhuc SoPhuc::operator* (SoPhuc SP1)
{
	SoPhuc SP2;
	SP2.PhanThuc = this->PhanThuc * SP1.PhanThuc;
	SP2.PhanAo = this->PhanAo * SP1.PhanAo;
	return SP2;
}