#pragma once
#include"SinhVien.h"

class SVCQ : public SinhVien
{
public:
	SVCQ();
	SVCQ(string, string, string, string, int, map<string, shared_ptr<KQHT>>);
	~SVCQ();

	void setLoaiSV();
};