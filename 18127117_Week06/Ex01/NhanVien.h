#pragma once
#ifndef NHANVIEN_H_
#define NHANVIEN_H_
#endif // !NHANVIEN_H_

#include<iostream>
#include<string>
#include<cmath>
#include <vector>
#include <cstdlib>
using namespace std;
struct Date {
	int d, m, y;
};
class NhanVien {
public:
	virtual void input();
	virtual void output();
	virtual double calSal();
	NhanVien(string n, Date dob);
	NhanVien(int ma);
	NhanVien();
	NhanVien(const NhanVien &nv);
	NhanVien(int i, string n, Date d, string a);
	int getID() {
		return ID;
	}
	string getName() {
		return name;
	}
	int getMonth() {

		return DoB.m;
	}
	~NhanVien();
protected:
	int ID;
	string name;
	Date DoB;
	string add;
};
