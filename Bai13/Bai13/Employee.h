#pragma once
#include"Certificate.h"
#include<vector>
#include<memory>

class Employee
{
protected:
	string ID;
	string FullName;
	string BirthDay;
	string Phone;
	string Email;
	int Employee_type;
	static int Employee_count;
	vector<shared_ptr<Certificate>> ListCertificate;
public:
	Employee();
	Employee(string, string, string, string, string, int, vector<shared_ptr<Certificate>>);
	~Employee();

	//Setter
	virtual void setID(string);
	virtual void setFullName(string);
	virtual void setBirthDay(string);
	virtual void setPhone(string);
	virtual void setEmail(string);
	virtual void setEmployee_type(int);
	virtual void setListCertificate(vector<shared_ptr<Certificate>>);

	//Getter
	virtual string getID();
	virtual string getFullName();
	virtual string getBirthDay();
	virtual string getPhone();
	virtual string getEmail();
	virtual int getEmployee_type();
	virtual int getEmployee_count();
	virtual vector<shared_ptr<Certificate>> getListCertificate();

	//add to ListCertificate
	virtual void addCertificate(shared_ptr<Certificate>);
	
};