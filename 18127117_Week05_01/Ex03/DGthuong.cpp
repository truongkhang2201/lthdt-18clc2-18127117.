#include "DGthuong.h"
DGthuong::DGthuong() {
	ID = 0;
	name = "";
	Exp.d = 0;
	Exp.m = 0;
	Exp.y = 0;
	Gender = "";
	NoB = 0;
}
DGthuong::DGthuong(int ms)
{
	ID = ms;
	name = "";
	Exp.d = 0;
	Exp.m = 0;
	Exp.y = 0;
	Gender = "";
	NoB = 0;
}
DGthuong::DGthuong(string n) {
	ID = 0;
	name = n;
	Exp.d = 0;
	Exp.m = 0;
	Exp.y = 0;
	Gender = "";
	NoB = 0;
}
DGthuong::DGthuong(Date d, string gen, int num) {
	ID = 0;
	name = "";
	Exp.d = d.d;
	Exp.m = d.m;
	Exp.y = d.y;
	Gender = gen;
	NoB = num;
}
DGthuong::DGthuong(const DGthuong &dgthuong) {
	ID = dgthuong.ID;
	name = dgthuong.name;
	Exp.d = dgthuong.Exp.d;
	Exp.m = dgthuong.Exp.m;
	Exp.y = dgthuong.Exp.y;
	Gender = dgthuong.Gender;
	NoB = dgthuong.NoB;
}
void DGthuong::inputThuong() {
	cout << "Doc gia thuong : " << endl;
	cout << "Ma so :" << endl; cin >> ID;
	cout << "Ho Ten :" << endl; cin.ignore(); getline(cin, name); cout << endl;
	cout << "Ngay het han :" << endl; cin >> Exp.d >> Exp.m >> Exp.y;
	cout << "Gioi tinh :" << endl; cin >> Gender;
	cout << "So sach muon :" << endl; cin >> NoB;
}
void DGthuong::outputThuong() {
	cout << "Doc gia thuong :" << endl;
	cout << "Ma so: " << ID << endl;
	cout << "Ho ten :" << name<<endl;
	cout << "Ngay het han :" << Exp.d << "/" << Exp.m << "/" << Exp.y << endl;
	cout << "Gioi tinh : " << Gender << endl;
	cout << "So sach muon :" << NoB<<endl;
}
int DGthuong::phiThuong() {
	return NoB * 5000;
}