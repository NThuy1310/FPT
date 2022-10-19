#pragma once
#include<set>
#include"IO.h"
#include"KhuPho.h"


class QuanLyKhuPho
{
private:
	IO view;
	KhuPho kp;
	set<string> dsCMND;
	set<int> dsSoNha;
public:
	QuanLyKhuPho();
	~QuanLyKhuPho();

	void addKhuPho();
	void show_TTKhuPho();

	bool checkCMNDKP(string);
	bool checkSoNhaKP(int);
};