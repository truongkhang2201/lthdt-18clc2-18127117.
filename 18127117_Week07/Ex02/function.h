#pragma once
#include <iostream>
#include<iostream>
class Singleton
{
private:
	static Singleton* instance;
	Singleton();

public:
	static Singleton* getInstance();
};