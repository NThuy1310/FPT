#pragma once
#include<iostream>
#include<string>

using namespace std;

class HocSinh
{
	string ten;
	int tuoi;
	string queQuan;
	string lop;
public:
	HocSinh();
	HocSinh(string, int, string, string);
	~HocSinh();

	void setTen(string);
	void setTuoi(int);
	void setQueQuan(string);
	void setLop(string);

	string getTen();
	int getTuoi();
	string getQueQuan();
	string getLop();
};