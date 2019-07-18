#include "ThuVien.h"

void ThuVien::input(int n)
{
	int chon;
	dg = new DG*[100];

	for (int i = 0; i < n; i++)
	{
		cout << "Chon loai doc gia (1. Doc gia thuong | 2. Doc gia VIP): ";
		cin >> chon;

		DG *DG = nullptr;
		switch (chon)
		{
		case 1:
			DG = new DGthuong;
			numThuong++;
			break;
		case 2:
			DG = new DGVip;
			numVip++;
			break;
		}
		DG->input();
	}
}

void ThuVien::output(int n)
{
	for (int i = 0; i < n; i++)
	{
		dg[i]->output();
	}
}
int ThuVien::tongPhi(int n)
{
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		tong += dg[i]->tinhPhi();
	}
	return tong;
}
void ThuVien::phiCaonhat(int n)
{
	int max = dg[0]->tinhPhi();
	int in = 0;
	for (int i = 0; i < n; i++)
	{
		if (max < dg[i]->tinhPhi())
		{
			max = dg[i]->tinhPhi();
			in = 0;
		}
	}
	cout << "Doc gia co le phi cao nhat:"<<endl;
	dg[in]->output();
}

int ThuVien::demThuong()
{
	return numThuong;
}

int ThuVien::demVip()
{
	return numVip;
}

double ThuVien::phiTB(int n)
{
	return tongPhi(n) / n;
}

void ThuVien::phiTren30000(int n)
{
	cout << "Doc gia co le phi tren 30000: "<<endl;
	for (int i = 0; i < n; i++)
	{
		if (dg[i]->tinhPhi() > 30000)
		{
			dg[i]->output();
		}
	}
}

void ThuVien::maDG(int n)
{
	int ma;
	cout << "\nNhap ma doc gia can tim:";
	cin >> ma;
	for (int i = 0; i < n; i++)
	{
		if (ma == dg[i]->maDG())
		{
			dg[i]->output();
		}
	}
}

void ThuVien::tenDG(int n)
{
	string ten;
	cout << "Nhap ten doc gia can tim:";
	cin.ignore();
	getline(cin, ten);

	for (int i = 0; i < n; i++)
	{
		if (ten == dg[i]->tenDG())
		{
			dg[i]->output();
		}
	}
}

int ThuVien::HH2017(int n)
{
	int dem = 0;

	for (int i = 0; i < n; i++)
	{
		if (dg[i]->namHH() == 2017)
		{
			dem++;
		}
	}
	return dem;
}
