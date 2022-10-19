#pragma once

#include<vector>
#include<iostream>
#include"HocSinh.h"
#include"IO.h"

class QuanLyHocSinh
{
private:
	vector<HocSinh*> dsHocSinh;
	IO io_view;
public:
	QuanLyHocSinh();
	void ThemHS();
	void HienThi();
	void HienThiHS_20();
	void HienThiHS_23_DN();
	~QuanLyHocSinh();
};