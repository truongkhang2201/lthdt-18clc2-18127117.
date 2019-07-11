#pragma once
#include <iostream>
#include <string>
using namespace std;
struct Date {
	int d, m, y;
};
class DG
{
protected:
	int ID;
	string name;
	Date Exp;
	string Gender;
	int NoB;
public:
	DG();
	DG(int ms);
	DG(string n);
	DG(Date d, string gen, int num);
	DG(const DG &dg);
};