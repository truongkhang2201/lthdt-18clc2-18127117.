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
void DGthuong::input() {
	DG::input();
	cout << "So sach muon :" << endl; cin >> NoB;
}
void DGthuong::output() {
	DG::output();
	cout << "So sach muon :" << NoB << endl;
}
int DGthuong::tinhPhi() {
	return NoB * 5000;
}
DGthuong::~DGthuong()
{
	cout << "Xoa DG thuong " << endl;
}