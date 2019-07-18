#include"DG.h"
void DG::input()
{
	cout << "Ma doc gia: ";
	cin >> ID;

	cout << "Ho ten : ";
	cin.ignore();
	getline(cin, name);

	cout << "Ngay het han: ";
	cin >> Exp.d >> Exp.m >> Exp.y;

	cout << "Gioi tinh: ";
	getline(cin, Gender);
}
void DG::output()
{
	cout << "Ma doc gia :" << ID<<endl;
	cout << "Ho ten :" << name << endl;
	cout << "Ngay het han :" << Exp.d << "/" << Exp.m << "/" << Exp.y << endl;
	cout << "Gioi tinh :" << Gender << endl;
}
int DG::tinhPhi()
{
	return 0;
}
DG::DG() {
	ID = 0;
	name = "";
	Exp.d = 0;
	Exp.m = 0;
	Exp.y = 0;
	Gender = "";
	NoB = 0;
}
DG::DG(int ms) {
	ID = ms;
	name = "";
	Exp.d = 0;
	Exp.m = 0;
	Exp.y = 0;
	Gender = "";
	NoB = 0;
}
DG::DG(string n)
{
	ID = 0;
	name = n;
	Exp.d = 0;
	Exp.m = 0;
	Exp.y = 0;
	Gender = "";
	NoB = 0;
}
DG::DG(Date d, string gen, int num) {
	ID = 0;
	name = "";
	Exp.d = d.d;
	Exp.m = d.m;
	Exp.y = d.y;
	Gender = gen;
	NoB = num;
}
DG::DG(const DG &dg) {
	ID = dg.ID;
	name = dg.name;
	Exp.d = dg.Exp.d;
	Exp.m = dg.Exp.m;
	Exp.y = dg.Exp.y;
	Gender = dg.Gender;
	NoB = dg.NoB;
}
DG::~DG()
{
	cout << "Xoa doc gia :" << endl;
}