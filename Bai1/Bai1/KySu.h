#pragma once
#include<iostream>
#include<string>
#include"CanBo.h"
using namespace std;

class KySu : public CanBo
{
	string NganhDaoTao;
public:
	void NhapTT();
	void XuatTT();
};

void KySu::NhapTT()
{
	CanBo::NhapTT();
	cout << "Nganh dao tao: " << endl;
	getline(cin, NganhDaoTao);
}

void KySu::XuatTT()
{
	CanBo::XuatTT();
	cout << "Nganh dao tao: " << NganhDaoTao << endl;
	cout << "Can bo Ky Su" << endl;
}
