#include "GiaoVien.h"

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
	cout << "Xoa GiaoVien: "<<endl;
}

double GiaoVien::luongGV()
{
	return hesoluong * luongcoban - songaynghi * 100000;
}