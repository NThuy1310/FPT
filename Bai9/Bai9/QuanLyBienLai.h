#pragma once
#include"BienLai.h"
#include<map>


class QLBL
{
private:
	map<string, shared_ptr<BienLai>> DSBienLai;
public:
	bool checkMS_CongTo(string);

	void addHo(string, int, string, int, int);

	void deleteHo(string);

	void modifyTenHo(string, string);
	void modifySoNha(string, int);
	void modifyMS_CongTo(string, string);
	void modifyAll(string, string, int, string);

	int calculateTienDien(string);

	map<string, shared_ptr<BienLai>> getDSBienLai();
};