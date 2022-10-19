#pragma once
#include"TheMuon.h"
#include"IO.h"
#include<map>

class QLTM
{
private:
	map<int, shared_ptr<TheMuon>> dsTheMuon;
	IO view;
public:
	QLTM();
	~QLTM();

	bool checkMaMuon(int);
	void addThe();
	void deleteThe();
	void showThe();
};