#pragma once
#ifndef CFILE_H_
#define CFILE_H_
#include<iostream>
#include"CItem.h"
using namespace std;


class CFile: public CItem
{
public:
	CFile() {};
	~CFile() {};
	CFile(const string& n, const int& s);
	string getVar();
	string getName();
	int getSize();
	void setHidden(bool x, bool y);
};
#endif // !CFILE_H_
