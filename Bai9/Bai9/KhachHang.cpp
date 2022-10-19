#include"KhachHang.h"

KhachHang::KhachHang()
{
	//
}
KhachHang::KhachHang(string TenChuHo, int SoNha, string MS_CongTo)
{
	this->TenChuHo = TenChuHo;
	this->SoNha = SoNha;
	this->MS_CongTo = MS_CongTo;
}
KhachHang::~KhachHang()
{
	//
}

void KhachHang::setTenChuHo(string TenChuHo)
{
	this->TenChuHo = TenChuHo;
}
void KhachHang::setSoNha(int SoNha)
{
	this->SoNha = SoNha;
}
void KhachHang::setMS_CongTo(string MS_CongTo)
{
	this->MS_CongTo = MS_CongTo;
}

string KhachHang::getTenChuHo()
{
	return TenChuHo;
}
int KhachHang::getSoNha()
{
	return SoNha;
}
string KhachHang::getMS_CongTo()
{
	return MS_CongTo;
}