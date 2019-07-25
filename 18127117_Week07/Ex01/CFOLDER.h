#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<conio.h>
#include<stdio.h>
#include"CFile.h"
using namespace std;

class CFolder: public CItem
{
private:
	int nFile, nFolder;
	 vector<CItem*> files;
public:
	CFolder() {};
	~CFolder() {};
	int getSize();
	string getVar();
	string getName();
	CFolder(string fol);
	void add( CFile *file);
	void add(CFolder *folder);
	void print(const int &src);
	CItem* removeByName(const string fol);
	CItem* findByName(const string fol);
	void setHidden(bool x, bool y);
};