#pragma once
#include "GiaoVien.h"
#include "GVCN.h"

class TruongHoc
{
private:
	GiaoVien **gv;
	int numGV = 0, numGVCN = 0;
public:
	void input(int n);
	void output(int n);
	double tongLuong(int n);
	void luongCaonhat(int n);
	int demGV();
	int demGVCN();
	double luongTB(int n);
	void Tren10tr(int n);
	void maGV(int n);
	void tenGV(int n);
	int Qua4Ngay(int n);

};
