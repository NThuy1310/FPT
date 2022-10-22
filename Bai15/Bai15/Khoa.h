#pragma once
#include"SinhVienChinhQuy.h"
#include"SinhVienTaiChuc.h"
#include<memory>
#include<vector>

class Khoa
{
private:
	string tenKhoa;
	map<string, shared_ptr<SinhVien>> dsSVTheoHoc;

public:
	Khoa();
	Khoa(string, map<string, shared_ptr<SinhVien>>);
	~Khoa();

	void setTenKhoa(string);
	void setDSSVTheoHoc(map<string, shared_ptr<SinhVien>>);

	void addSV(shared_ptr<SinhVien>);

	string getTenKhoa();
	map<string, shared_ptr<SinhVien>> getDSSVTheoHoc();

	bool isSVCQ(string);
	int getTongSVCQ();
	map<string, shared_ptr<SinhVien>> findDiemDVCaoNhat();
	map<string, shared_ptr<SinhVien>> getDSSVTC(string);
	map<string, shared_ptr<SinhVien>> getDSSVCoDiemTBLonHon8();
	map<string, shared_ptr<SinhVien>> findDiemTBCaoNhat(string);
	int getTongSVTheoNamVaoHoc(string);
};