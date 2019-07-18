#include"CongTy.h"
void CongTy::input(int n) {

		int opt;
		nv = new NhanVien*[100];
	for (int i = 0; i < n; i++) {
		cout << "Enter: 1. NVSX  2. NVCN ";
		cin >> opt;
	
			NhanVien *Cty = nullptr;
			switch (opt) {
			case 1:
				Cty = new NVSanXuat;
				numSX++;
				break;
			case 2:
				Cty = new NVCongNhat;
				numCN++;
				break;

			}
			Cty->input();
			nv[i] = Cty;
	}
}
void CongTy::output(int n)
{
	cout << "Thong tin nhan vien " << endl;
	for (int i = 0; i < n; i++)
	{
		nv[i]->output();
	}
}
double CongTy::tongLuong(int n)
{
	double tong = 0;
	for (int i = 0; i < n; i++)
	{
		tong += nv[i]->calSal();
	}
	return tong;
}
double CongTy::luongtb(int n)
{
	double tb = tongLuong(n) / n;
	return tb;
}
int CongTy::demSX() {
	return numSX;
}
int CongTy::demCN() {
	return numCN;
}
void CongTy::luongcaonhat(int n)
{
	double max = nv[0]->calSal();
	int in = 0;
	for (int i = 0; i < n; i++)
	{
		if (nv[i]->calSal() > max)
		{
			max = nv[i]->calSal();
			in = i;
		}
		cout << "Nhan vien luong cao nhat :" << endl;
		nv[in]->output();
	}
}
void CongTy::duoi3tr(int n)
{
	for (int i = 0; i < n; i++)
	{
		if (nv[i]->calSal() < 3000000)
		{
			cout << "Nhan vien duoi 3 trieu :" << endl;
			nv[i]->output();
		}
	}
}
void CongTy::maNV(int n) {
	int id;
	cout << "Nhap ID can tim ";
	cin >> id;
	for (int i = 0; i < n; i++)
	{
		if (id == nv[i]->getID())
		{
			cout << "Thong tin NV :" << endl;
			nv[i]->output();
		}
		else cout << "Sai ID " << endl;
	}
}
void CongTy::tenNV(int n)
{
	string name;
	cout << "Nhap ten can tim " << endl;
	cin.ignore();
	getline(cin, name);
	for (int i = 0; i < n; i++)
	{
		if (name == nv[i]->getName())
		{
			cout << "Thong tin NV : " << endl;
			nv[i]->output();
		}
		else cout << "Sai ten "<<endl;
	}
}
int CongTy::sinhThang5(int n)
{
	int dem = 0;
	for(int i=0;i<n;i++)
	{
		int month = nv[i]->getMonth();
		if (month == 5)
			dem++;
	}
	return dem;
}