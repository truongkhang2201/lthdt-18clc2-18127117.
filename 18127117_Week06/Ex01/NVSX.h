#pragma once
#include"NhanVien.h"
class NVSanXuat :public NhanVien {
public:
	void input();
	void output();
	double calSal();
	//NVSanXuat(string address, int p);
	//NVSanXuat(Date day);
	NVSanXuat();
	NVSanXuat(int x);
	NVSanXuat(const NVSanXuat &nv);
	~NVSanXuat();
private:
	int NoP;
};

