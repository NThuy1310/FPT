#pragma once
#include<vector>
#include<set>
#include"Nguoi.h"
#include"Phong.h"
#include"IO.h"

class KhachSan
{
private:
	IO view;
	vector<Phong*> dsPhongThue;
	set<string> dsCMND;
public:
	KhachSan();
	~KhachSan();

	bool checkCMND(string);
	void addPhongThue();
	void deleteNguoiThue();
	void calTienPhong();
	void showDSPhong();
};

