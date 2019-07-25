#include"function.h"
Singleton* Singleton::instance = 0;

Singleton* Singleton::getInstance()
{
	if (instance == 0)
	{
		instance = new Singleton();
	}

	return instance;
}

Singleton::Singleton()
{}
