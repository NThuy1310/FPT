#pragma once
#include<iostream>
#include<string>

using namespace std;

class Nguoi
{
private:
	string ten;
	int tuoi;
	string cmnd;
public:
	Nguoi();
	Nguoi(string, int, string);
	~Nguoi();

	void setTen(string);
	void setTuoi(int);
	void setCMND(string);

	string getTen();
	int getTuoi();
	string getCMND();

};