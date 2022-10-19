#pragma once
#include<string>

using namespace std;

class VanBan
{
private:
	int stt;
	string str;
public:
	VanBan();
	VanBan(int, string);
	~VanBan();

	void setSTT(int);
	void setXauKiTu(string);

	int getSTT();
	string* getXauKiTu();
};