#pragma once
#include<string>

using namespace std;

class Certificate
{
private:
	string CertificatedID;
	string CertificateName;
	string CertificateRank;
	string CertificatedDate;
public:
	Certificate();
	Certificate(string, string, string, string);
	~Certificate();

	void setCertificatedID(string);
	void setCertificateName(string);
	void setCertificateRank(string);
	void setCertificatedDate(string);

	string getCertificatedID();
	string getCertificateName();
	string getCertificateRank();
	string getCertificatedDate();
};