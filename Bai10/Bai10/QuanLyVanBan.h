#pragma once
#include"VanBan.h"
#include<sstream>
#include<map>
#include<memory>

class QLVB
{
private:
	map<int, shared_ptr<VanBan>> DsVanBan;
public:
	bool checkSTT(int);

	void ThemVanban(int, string);
	int DemSoTu(int);
	int DemKiTu_Aa(int);
	string* ChuanHoa(int);

	map<int, shared_ptr<VanBan>> getDsVanBan();
};