#pragma once
#include<iostream>
#include<string>

using namespace std;

class IO
{
public:
	int IN_MaMuon();
	int IN_NgayMuon();
	int IN_HanTra();
	int IN_SoHieuSach();
	string IN_TenHS();
	int IN_TuoiHS();
	string IN_LopHS();

	void OUT_TTTheMuon(int, int, int, int, string , int, string);
	void OUT_AddThe();
	void OUT_Trung_MaMuon();
	void OUT_DeleteThe();
	void OUT_Ma_NotMatch();
	void OUT_Result_Delete();
	void OUT_ShowThe(int);
};