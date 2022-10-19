#pragma once
#include"CBGV.h"
#include"IO.h"
#include<map>
#include<set>
#include<memory>

class QLCBGV
{
private:
	IO view;
	map<string, shared_ptr<CBGV>> dsCBGV;
	set<string> dsMSGV;
public:
	QLCBGV();
	~QLCBGV();

	bool checkMS(string);
	void addGV();
	void deleteGV();
	void calLuongThuc();
};