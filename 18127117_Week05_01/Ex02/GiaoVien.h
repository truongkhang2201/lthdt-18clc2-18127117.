#pragma once

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class GiaoVien
{
protected:
	int ID;
	string name;
	double hesoluong;
	int luongcoban;
	int songaynghi;
public:
	GiaoVien();
	GiaoVien(int ma, string n);
	GiaoVien(double heso, int sal);
	GiaoVien(int off);
	~GiaoVien();
	GiaoVien(const GiaoVien &gv);
	double luongGV();
};
