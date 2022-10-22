#include"MyCustomException.h"

MyCustomException::MyCustomException()
{
	//
}
MyCustomException::MyCustomException(const char* mess) : message(mess) {}
MyCustomException::~MyCustomException()
{
	//
}


const char* MyCustomException::what()
{
	return message;
}