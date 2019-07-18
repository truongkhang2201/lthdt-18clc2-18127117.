#include "NhanVien.h"
void NhanVien::input(){
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
}
void NhanVien::output() {
	cout << "Nhan Vien ID :" << ID<<endl;
	cout << "Ten :" << name<<endl;
	cout << "Ngay sinh:" << DoB.d<<"/"<<DoB.m<<"/"<<DoB.y<<endl;
	cout << "Dia chi :" << add<<endl;
}
double NhanVien::calSal() {
	return 0;
}
NhanVien::NhanVien() {
	ID = 0;
	name = 'None';
	DoB.d = 1;
	DoB.m = 1;
	DoB.y = 1;
	add = "1";
}
NhanVien::NhanVien(const NhanVien&nv) {
	ID = nv.ID;
	name = nv.name;
	DoB.d = nv.DoB.d;
	DoB.m = nv.DoB.m;
	DoB.y = nv.DoB.y;
	add = nv.add;
}
NhanVien::NhanVien(int i, string n, Date d, string a) {
	ID = i;
	name = n;
	DoB = d;
	add = a;
}
NhanVien::NhanVien(int ma)
{
	ID = ma;
	name = "";
	DoB.d = 0;
	DoB.m = 0;
	DoB.y = 0;
	add = "";
}
NhanVien::NhanVien(string n, Date dob)
{
	ID = 0;
	name = n;
	DoB = dob;
	add = "";
}
NhanVien::~NhanVien() {};