#pragma once
#include"function.h"
using namespace std;
int main()
{
	Singleton* s1 = Singleton::getInstance();
	Singleton* s2 = Singleton::getInstance();

	cout << s1 << endl;
	cout << s2 << endl;
	system("pause");
}