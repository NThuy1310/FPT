#pragma once
#include<string>

using namespace std;

class KhachHang
{
private:
	string TenChuHo;
	int SoNha;
	string MS_CongTo;
public:
	KhachHang();
	KhachHang(string, int, string);
	~KhachHang();

	void setTenChuHo(string);
	void setSoNha(int);
	void setMS_CongTo(string);

	string getTenChuHo();
	int getSoNha();
	string getMS_CongTo();
};