#pragma once

#include "GiaoVien.h"

class GVCN :public GiaoVien
{
private:
	string tenlop;
public:
	GVCN();
	GVCN(int ma, string n);
	GVCN(double heso, int sal);
	GVCN(int off);
	GVCN(const GVCN& gvcn);
	~GVCN();
	void input();
	void output();
	double luong();
};
