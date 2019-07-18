#include "TruongHoc.h"

void TruongHoc::input(int n)
{
	int opt;
	gv = new GiaoVien*[100];
	for (int i = 0; i < n; i++) {
		cout << "Enter: 1. Giao vien  2. GVCN ";
		cin >> opt;

		GiaoVien *GV = nullptr;
		switch (opt) {
		case 1:
			GV = new GiaoVien;
			numGV++;
			break;
		case 2:
			GV = new GVCN;
			numGVCN++;
			break;

		}
		GV->input();
		gv[i] = GV;
	}
}
void TruongHoc::output(int n)
{
	cout << "Thong tin nhan vien " << endl;
	for (int i = 0; i < n; i++)
	{
		gv[i]->output();
	}
}
double TruongHoc::tongLuong(int n)
{
	double tong = 0;
	for (int i = 0; i < n; i++)
	{
		tong += gv[i]->calSal();
	}
	return tong;
}
double TruongHoc::luongTB(int n)
{
	double tb = tongLuong(n) / n;
	return tb;
}
int TruongHoc::demGV() {
	return numGV;
}
int TruongHoc::demGVCN() {
	return numGVCN;
}
void TruongHoc::luongCaonhat(int n)
{
	double max = gv[0]->calSal();
	int in = 0;
	for (int i = 0; i < n; i++)
	{
		if (gv[i]->calSal() > max)
		{
			max = gv[i]->calSal();
			in = i;
		}
		cout << "Nhan vien luong cao nhat :" << endl;
		gv[in]->output();
	}
}
void TruongHoc::Tren10tr(int n)
{
	for (int i = 0; i < n; i++)
	{
		if (gv[i]->calSal() > 10000000)
		{
			cout << "Nhan vien duoi 3 trieu :" << endl;
			gv[i]->output();
		}
	}
}
void TruongHoc::maGV(int n) {
	int id;
	cout << "Nhap ID can tim ";
	cin >> id;
	for (int i = 0; i < n; i++)
	{
		if (id == gv[i]->GetID())
		{
			cout << "Thong tin NV :" << endl;
			gv[i]->output();
		}
		else cout << "Sai ID " << endl;
	}
}
void TruongHoc::tenGV(int n)
{
	string name;
	cout << "Nhap ten can tim " << endl;
	cin.ignore();
	getline(cin, name);
	for (int i = 0; i < n; i++)
	{
		if (name == gv[i]->GetName())
		{
			cout << "Thong tin NV : " << endl;
			gv[i]->output();
		}
		else cout << "Sai ten " << endl;
	}
}
int TruongHoc::Qua4Ngay(int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		int day = gv[i]->DayOff();
		if (day > 4)
			dem++;
	}
	return dem;
}