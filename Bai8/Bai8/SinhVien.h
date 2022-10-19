#pragma once
#include<iostream>
#include<string>

using namespace std;

class SinhVien
{
	string ten;
	int tuoi;
	string lop;
public:
	SinhVien();
	SinhVien(string, int, string);
	~SinhVien();

	void setTen(string);
	void setTuoi(int);
	void setLop(string);

	string getTen();
	int getTuoi();
	string getLop();
};
