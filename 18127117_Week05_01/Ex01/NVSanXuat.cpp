#include"NVSanXuat.h"

int NVSanXuat::calsalSX() {
	return 20000 * NoP;
}
NVSanXuat::NVSanXuat() {
	NoP = 0;
}
NVSanXuat::NVSanXuat(const NVSanXuat &nv) {
	NoP = nv.NoP;
	ID = nv.ID;
	name = nv.name;
	DoB.d = nv.DoB.d;
	DoB.m = nv.DoB.m;
	DoB.y = nv.DoB.y;
	add = nv.add;
}
NVSanXuat::NVSanXuat(int x) {
	NoP = x;

}
NVSanXuat::NVSanXuat(string address, int p)
{
	ID = 0;
	name = "";
	DoB.d = 0;
	DoB.m = 0;
	DoB.y = 0;
	add = address;
	NoP = p;
}
NVSanXuat::NVSanXuat(Date day)
{
	ID = 0;
	name = "";
	DoB = day;
	add = "";
	NoP = 0;
}
void NVSanXuat::input() {
	cout << "Nhan vien cong nhat: " << endl;
	cout << "ID:";
	cin >> ID;
	cout << "Name: ";
	cin.ignore();
	getline(cin, name);
	cout << "DoB :";
	cin >> DoB.d;
	cin >> DoB.m;
	cin >> DoB.y;
	cout << "Address:";
	cin.ignore();
	getline(cin, add);
	cout << "Enter product: ";
	cin >> NoP;
}
void NVSanXuat::output() {
	cout << "Nhan Vien ID :" << ID << endl;
	cout << "Ten :" << name << endl;
	cout << "Ngay sinh:" << DoB.d << "/" << DoB.m << "/" << DoB.y << endl;
	cout << "Dia chi :" << add << endl;
	cout << "So ngay lam :" << NoP << endl;
}