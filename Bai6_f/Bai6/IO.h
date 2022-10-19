#pragma once
#include<iostream>
#include<string>

using namespace std;

class IO
{
public:
	string IN_Ten();
	int IN_Tuoi();
	string IN_QueQuan();
	string IN_Lop();

	void OUT_TTHocSinh(string, int, string, string);
	void OUT_NOTMATCH();
	void OUT_RESULT(int);
};

