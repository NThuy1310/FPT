#pragma once
#include<cmath>
#include<string>
#include<map>

using namespace std;

class KQHT
{
private:
	string kiHoc;
	map<string, double> KQ1Ki;

public:
	KQHT();
	KQHT(string, map<string, double>);
	~KQHT();

	void setKiHoc(string);
	void setKG1Ki(map<string, double>);

	string getKiHoc();
	map<string, double> getKQ1Ki();
	double getTBMon1Ki();
};