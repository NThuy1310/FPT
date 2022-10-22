#include"SinhVienChinhQuy.h"

SVCQ::SVCQ()
{
	//
}
SVCQ::SVCQ(string maSV, string ten, string ngaySinh, string namHoc, int diemDauVao, map<string, shared_ptr<KQHT>> dsKQHT)
	:SinhVien(maSV, ten, ngaySinh, namHoc, diemDauVao, dsKQHT)
{
	loaiSV = "Chinh Quy";
}
SVCQ::~SVCQ()
{
	//
}

void SVCQ::setLoaiSV()
{
	loaiSV = "Chinh Quy";
}
