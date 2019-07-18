#include "CongTy.h"
#include "NhanVien.h"
#include "NVCN.h"
#include "NVSX.h"
int main()
{
	int n;
	cout << "Nhap so nhan vien :" << endl;
	cin >> n;

	CongTy ct;
	ct.input(n);
	ct.output(n);
	cout << "Tong tien luong NV:" << endl;
	ct.tongLuong(n);
	ct.luongcaonhat(n);
	ct.luongtb(n);
	
	cout<<"So NVCN:"<<ct.demCN();
	cout << "So NVSX:" << ct.demSX();
	
	ct.duoi3tr(n);
	ct.maNV(n);
	ct.tenNV(n);
	cout << "Nhan vien sinh thang 5 :" << ct.sinhThang5(n)<<endl;
	system("pause");
}