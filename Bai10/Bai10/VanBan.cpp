#include"VanBan.h"

VanBan::VanBan()
{
	//
}
VanBan::VanBan(int stt, string str)
{
	this->stt = stt;
	this->str = str;
}
VanBan::~VanBan()
{
	//
}

void VanBan::setSTT(int stt)
{
	this->stt = stt;
}
void VanBan::setXauKiTu(string str)
{
	this->str = str;
}

int VanBan::getSTT()
{
	return stt;
}
string* VanBan::getXauKiTu()
{
	return &str;
}