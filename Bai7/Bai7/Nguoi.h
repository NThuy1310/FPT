#pragma once
#include<iostream>
#include<string>

using namespace std;

class Nguoi
{
protected:
	string ten;
	int tuoi;
	string queQuan;
	string msgv;
public:
	Nguoi();
	Nguoi(string, int, string, string);
	~Nguoi();

	void setTen(string);
	void setTuoi(int);
	void setQueQuan(string);
	void setMSGV(string);

	string getTen();
	int getTuoi();
	string getQueQuan();
	string getMSGV();

};