#include"Certificate.h"

Certificate::Certificate()
{
	//
}
Certificate::Certificate(string CertificatedID, string CertificateName, string CertificateRank, string CertificatedDate)
{
	this->CertificatedID = CertificatedID;
	this->CertificateName = CertificateName;
	this->CertificateRank = CertificateRank;
	this->CertificatedDate = CertificatedDate;
}
Certificate::~Certificate()
{
	//
}

void Certificate::setCertificatedID(string CertificatedID)
{
	this->CertificatedID = CertificatedID;
}
void Certificate::setCertificateName(string CertificateName)
{
	this->CertificateName = CertificateName;
}
void Certificate::setCertificateRank(string CertificateRank)
{
	this->CertificateRank = CertificateRank;
}
void Certificate::setCertificatedDate(string CertificatedDate)
{
	this->CertificatedDate = CertificatedDate;
}

string Certificate::getCertificatedID()
{
	return CertificatedID;
}
string Certificate::getCertificateName()
{
	return CertificateName;
}
string Certificate::getCertificateRank()
{
	return CertificateRank;
}
string Certificate::getCertificatedDate()
{
	return CertificatedDate;
}