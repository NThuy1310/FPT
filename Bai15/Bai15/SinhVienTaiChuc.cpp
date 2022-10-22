#include"SinhVienTaiChuc.h"

SVTC::SVTC()
{
	//
}
SVTC::SVTC(string maSV, string ten, string ngaySinh, string namHoc, int diemDauVao, map<string, shared_ptr<KQHT>> dsKQHT)
	:SinhVien(maSV, ten, ngaySinh, namHoc, diemDauVao, dsKQHT)
{
	loaiSV = "Tai Chuc";
}
SVTC::SVTC()
{
	//
}

void SVTC::setLoaiSV()
{
	loaiSV = "Tai Chuc";
}
void SVTC::setNoiLKDT(string noiLKDT)
{
	this->noiLKDT = noiLKDT;
}

string SVTC::getNoiLKDT()
{
	return noiLKDT;
}