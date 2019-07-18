#include "GiaoVien.h"
void GiaoVien::input()
{
	cout << "Nhap ID :";
	cin >> ID;
	cout << "Ho ten : ";
	cin.ignore();
	getline(cin, name);

	cout << "He so luong: ";
	cin >> hesoluong;

	cout << "Luong co ban: ";
	cin >> luongcoban;

	cout << "So ngay nghi: ";
	cin >> songaynghi;
}
void GiaoVien::output()
{
	cout << "Ma GV: " << ID << endl;
	cout << "Ho ten :" << name << endl;
	cout << "He so luong :" << hesoluong << endl;
	cout << "Luong co ban :" << luongcoban << endl;
	cout << "So ngay nghi :" << songaynghi << endl;
}
GiaoVien::GiaoVien()
{
	ID = 0;
	name = "";
	hesoluong = 0.0;
	luongcoban = 0;
	songaynghi = 0;
}

GiaoVien::GiaoVien(int ma, string n)
{
	ID = ma;
	name = n;
}

GiaoVien::GiaoVien(double heso, int sal)
{
	hesoluong = heso;
	luongcoban = sal;
}

GiaoVien::GiaoVien(int off)
{
	songaynghi = off;
}

GiaoVien::GiaoVien(const GiaoVien &gv)
{
	ID = gv.ID;
	name = gv.name;
	hesoluong = gv.hesoluong;
	luongcoban = gv.luongcoban;
	songaynghi = gv.songaynghi;
}

GiaoVien::~GiaoVien()
{
	cout << "Xoa GiaoVien: " << endl;
}

double GiaoVien::calSal()
{
	return hesoluong * luongcoban - songaynghi * 100000;
}
int GiaoVien::GetID() {
	return ID;
}
string GiaoVien::GetName()
{
	return name;
}
int GiaoVien::DayOff()
{
	return songaynghi;
}