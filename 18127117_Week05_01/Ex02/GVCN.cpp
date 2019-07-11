#include "GiaoVien.h"
#include "GVCN.h"

GVCN::GVCN()
{
	ID = 0;
	name = "";
	hesoluong = 0.0;
	luongcoban = 0;
	songaynghi = 0;
	tenlop = "";
}

GVCN::GVCN(int m, string n)
{

	ID = m;
	name = n;
	hesoluong = 0.0;
	luongcoban = 0;
	songaynghi = 0;
	tenlop = "";
}

GVCN::GVCN(double heso, int sal)
{
	ID = 0;
	name = "";
	hesoluong = heso;
	luongcoban = sal;
	songaynghi = 0;
	tenlop = "";
}

GVCN::GVCN(int off)
{
	ID = 0;
	name = "";
	hesoluong = 0.0;
	luongcoban = 0;
	songaynghi = off;
	tenlop = "";
}


GVCN::GVCN(const GVCN &gvcn)
{
	ID = gvcn.ID;
	name = gvcn.name;
	hesoluong = gvcn.hesoluong;
	luongcoban = gvcn.luongcoban;
	songaynghi = gvcn.songaynghi;
	tenlop = gvcn.tenlop;
}

GVCN::~GVCN()
{
	cout << "Xoa GVCN! "<<endl;
}

void GVCN::input()
{
	cout << "GVCN :" <<endl;

	cout << "Ma GV: ";
	cin >> ID;

	cout << "Ho ten GV: ";
	cin.ignore();
	getline(cin, name);

	cout << "He so luong: ";
	cin >> hesoluong;

	cout << "Luong co ban: ";
	cin >> luongcoban;

	cout << "So ngay nghi: ";
	cin >> songaynghi;

	cout << "Lop chu nhiem: ";
	cin >> tenlop;
}

void GVCN::output()
{
	cout << " Giao vien :"<<endl;

	cout << "Ma GV: " << ID << endl;
	cout << "Ten GV :" << name << endl;
	cout << "He so luong: " << hesoluong << endl;
	cout << "Luong co ban: " << fixed << setprecision(2) << luongcoban << endl;
	cout << "So ngay nghi: " << songaynghi << endl;
	cout << "Lop CN: " << tenlop << endl;
}

double GVCN::luong()
{
	return luongGV() + 500000;
}