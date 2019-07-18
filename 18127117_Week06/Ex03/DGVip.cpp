#include "DGVip.h"
DGVip::DGVip() {
	ID = 0;
	name = "";
	Exp.d = 0;
	Exp.m = 0;
	Exp.y = 0;
	Gender = "";
	NoB = 0;
}
DGVip::DGVip(int ms)
{
	ID = ms;
	name = "";
	Exp.d = 0;
	Exp.m = 0;
	Exp.y = 0;
	Gender = "";
	NoB = 0;
}
DGVip::DGVip(string n) {
	ID = 0;
	name = n;
	Exp.d = 0;
	Exp.m = 0;
	Exp.y = 0;
	Gender = "";
	NoB = 0;
}
DGVip::DGVip(Date d, string gen, int num) {
	ID = 0;
	name = "";
	Exp.d = d.d;
	Exp.m = d.m;
	Exp.y = d.y;
	Gender = gen;
	NoB = num;
}
DGVip::DGVip(const DGVip &dgvip) {
	ID = dgvip.ID;
	name = dgvip.name;
	Exp.d = dgvip.Exp.d;
	Exp.m = dgvip.Exp.m;
	Exp.y = dgvip.Exp.y;
	Gender = dgvip.Gender;
	NoB = dgvip.NoB;
}
void DGVip::input() {
	cout << "Doc gia vip : " << endl;
	DG::input();
	cout << "So sach muon :" << endl; cin >> NoB;
}
void DGVip::output() {
	cout << "Doc gia vip :" << endl;
	DG::output();

	cout << "So sach muon :" << NoB << endl;
}
int DGVip::tinhPhi() {
	return 50000;
}
DGVip::~DGVip()
{
	cout << "Xoa DG vip " << endl;
}