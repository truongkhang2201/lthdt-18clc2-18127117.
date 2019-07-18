#pragma once

#include "DG.h"
#include "DGThuong.h"
#include "DGVIP.h"

class ThuVien
{
private:
		DG **dg;
		int numThuong = 0, numVip = 0;
public:
	void input(int n);
	void output(int n);
	int tongPhi(int n);
	void phiCaonhat(int n);
	int demThuong();
	int demVip();
	double phiTB(int n);
	void phiTren30000(int n);
	void maDG(int n);
	void tenDG(int n);
	int HH2017(int n);
};