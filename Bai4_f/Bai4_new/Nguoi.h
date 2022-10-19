#pragma once
#include<iostream>
#include<string>

using namespace std;
class Nguoi
{
private:
	string ten;
	int tuoi;
	string ngheNghiep;
	string cmnd;
	
public:
	Nguoi();
	Nguoi(string, int, string, string);
	~Nguoi();

	void setTen(string);
	void setTuoi(int);
	void setNgheNgiep(string);
	void setCMND(string);

	string getTen();
	int getTuoi();
	string getNgheNghiep();
	string getCMND();

};