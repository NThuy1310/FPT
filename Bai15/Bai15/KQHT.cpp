#include"KQHT.h"

KQHT::KQHT()
{
	//
}
KQHT::KQHT(string kiHoc, map<string, double> KQ1Ki)
{
	this->kiHoc = kiHoc;
	this->KQ1Ki = KQ1Ki;
}
KQHT::~KQHT()
{
	//
}

void KQHT::setKiHoc(string kiHoc)
{
	this->kiHoc = kiHoc;
}
void KQHT::setKG1Ki(map<string, double> KQ1Ki)
{
	this->KQ1Ki = KQ1Ki;
}

string KQHT::getKiHoc()
{
	return kiHoc;
}
map<string, double> KQHT::getKQ1Ki()
{
	return KQ1Ki;
}
double KQHT::getTBMon1Ki()
{
	double diemTB = 0;
	double sum = 0;
	for (auto i = KQ1Ki.begin(); i != KQ1Ki.end(); i++)
	{
		sum = sum + i->second;
	}
	diemTB = sum / KQ1Ki.size();
	return diemTB;
}