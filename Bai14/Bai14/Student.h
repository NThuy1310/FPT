#pragma once
#include<string>

using namespace std;

class Student
{
protected:
    string fullName;
    string doB;
    string sex;
    string phoneNumber;
    string universityName;
    string gradeLevel;
public:
    Student();
    Student(string, string, string, string, string, string);
    ~Student();

    virtual void setFullName(string);
    virtual void setDoB(string);
    virtual void setSex(string);
    virtual void setPhoneNumber(string);
    virtual void setUniversityName(string);
    virtual void setGradeLevel(string);

    virtual string getFullName();
    virtual string getDoB();
    virtual string getSex();
    virtual string getPhoneNumber();
    virtual string getUniversityName();
    virtual string getGradeLevel();
};