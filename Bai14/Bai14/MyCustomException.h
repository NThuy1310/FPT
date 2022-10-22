#pragma once
#include<exception>

using namespace std;

class MyCustomException : public exception
{
private:
	const char* message;
public:
	MyCustomException();
	MyCustomException(const char*);
	~MyCustomException();
	const char* what();
};