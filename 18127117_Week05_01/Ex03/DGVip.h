#pragma once
#include "DG.h"
class DGVip:public DG {
public:
	DGVip();
	DGVip(int ms);
	DGVip(string n);
	DGVip(Date d, string gen, int num);
	DGVip(const DGVip &dgvip);
	void inputVip();
	void outputVip();
	int phiVip();
};