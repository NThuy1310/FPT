#pragma once
#include<cmath>

using namespace std;

class SoPhuc
{
private:
	double PhanThuc;
	double PhanAo;
public:
	SoPhuc();
	SoPhuc(double, double);
	~SoPhuc();

	void setPhanThuc(double);
	void setPhanAo(double);

	double getPhanThuc();
	double getPhanAo();

	SoPhuc operator+ (SoPhuc);
	SoPhuc operator* (SoPhuc);
};