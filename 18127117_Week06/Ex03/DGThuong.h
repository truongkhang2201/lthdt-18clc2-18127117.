#pragma once
#include"DG.h"
class DGthuong :public DG {
public:
	DGthuong();
	DGthuong(int ms);
	DGthuong(string n);
	DGthuong(Date d, string gen, int num);
	DGthuong(const DGthuong &dgthuong);
	~DGthuong();
	void input();
	void output();
	int tinhPhi();
};
