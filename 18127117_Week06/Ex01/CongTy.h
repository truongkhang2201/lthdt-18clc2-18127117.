#ifndef _CONGTY_H_
#define _CONGTY_H_
#include "NhanVien.h"
#include"NVCN.h"
#include"NVSX.h"
#include<iostream>
#include<string>
using namespace std;
class CongTy {
private :
	NhanVien **nv;
	int numSX=0, numCN=0;
public:
	void input(int n);
	void output(int n);
	double tongLuong(int n);
	void luongcaonhat(int n);
	int demSX();
	int demCN();
	double luongtb(int n);
	void duoi3tr(int n);
	int sinhThang5(int n);
	void maNV(int n);
	void tenNV(int n);
};


#endif // !_CONGTY_H_
