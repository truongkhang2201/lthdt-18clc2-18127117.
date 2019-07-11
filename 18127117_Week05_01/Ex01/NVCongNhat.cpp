#include"NVCongNhat.h"
/*void NVCongNhat::inDay() {
	cout << "Enter day : ";
	cin >> DoW;
}*/
int NVCongNhat::calsalCN()
{
	return DoW * 300000;
}
NVCongNhat::NVCongNhat() {
	DoW = 0;
}
NVCongNhat::NVCongNhat(const NVCongNhat &nv) {
	DoW = nv.DoW;
	ID = nv.ID;
	name = nv.name;
	DoB.d = nv.DoB.d;
	DoB.m = nv.DoB.m;
	DoB.y = nv.DoB.y;
	add = nv.add;

}
NVCongNhat::NVCongNhat(int x) {
	DoW = x;
}
NVCongNhat::NVCongNhat(string address, int day)
{
	ID = 0;
	name = "";
	DoB.d = 0;
	DoB.m = 0;
	DoB.y = 0;
	add = address;
	DoW = day;
}
NVCongNhat::NVCongNhat(Date day)
{
	ID = 0;
	name = "";
	DoB = day;
	add = "";
	DoW = 0;
}
void NVCongNhat::input() {
	cout << "Nhan vien cong nhat: "<<endl;
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
	cout << "Enter day: ";
	cin >> DoW;
}
void NVCongNhat::output() {
	cout << "Nhan Vien ID :" << ID << endl;
	cout << "Ten :" << name << endl;
	cout << "Ngay sinh:" << DoB.d << "/" << DoB.m << "/" << DoB.y << endl;
	cout << "Dia chi :" << add << endl;
	cout << "So ngay lam :" << DoW<<endl;
}