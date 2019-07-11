#pragma once
#ifndef NHANVIEN_H_
#define NHANVIEN_H_
#endif // !NHANVIEN_H_

#include<iostream>
#include<string>
#include<fstream>
#include <vector>
#include <cstdlib>
using namespace std;
struct Date {
	int d, m, y;
};
class NhanVien {
public:
	//void input();
//	void output();
	NhanVien(string n, Date dob);
	NhanVien(int ma);
	NhanVien();
	NhanVien(const NhanVien &nv);
	NhanVien(int i, string n, Date d, string a);
protected:
	int ID;
	string name;
	Date DoB;
	string add;
};