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
	virtual void input();
	virtual void output();
	virtual int tinhPhi();
	DG();
	DG(int ms);
	DG(string n);
	DG(Date d, string gen, int num);
	DG(const DG &dg);
	int maDG() {
		return ID;
	};
	string tenDG()
	{
		return name;
	}
	int namHH()
	{
		return Exp.y;
	}
	~DG();
};
