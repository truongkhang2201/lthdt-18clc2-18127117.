#pragma once
#include"NhanVien.h"
class NVSanXuat :public NhanVien {
public:
	void input();
	void output();
	int calsalSX();
	NVSanXuat(string address, int p);
	NVSanXuat(Date day);
	NVSanXuat();
	NVSanXuat(int x);
	NVSanXuat(const NVSanXuat &nv);
private:
	int NoP;
};