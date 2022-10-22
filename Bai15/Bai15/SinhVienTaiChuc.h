#pragma once
#include"SinhVien.h"

class SVTC :public SinhVien
{
private:
	string noiLKDT;
public:
	SVTC();
	SVTC(string, string, string, string, int, map<string, shared_ptr<KQHT>>);
	SVTC();

	void setLoaiSV();
	void setNoiLKDT(string);

	string getNoiLKDT();
};