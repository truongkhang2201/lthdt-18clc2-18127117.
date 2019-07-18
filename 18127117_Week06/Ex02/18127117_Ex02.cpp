#include "GiaoVien.h"
#include "GVCN.h"
#include "TruongHoc.h"

int main()
{
	int n;
	cout << "Nhap so giao vien :";
	cin >> n;
	TruongHoc TH;
	TH.input(n);
	TH.output(n);
	 
	cout << "Tong luong GV: " << TH.tongLuong(n) << endl;

	TH.luongCaonhat(n);

	cout << "So GV khong chu nhiem :" << TH.demGV();
	cout << "So GV chu nhiem :" << TH.demGVCN();
	TH.Tren10tr(n);
	TH.maGV(n);
	TH.tenGV(n);
	cout << "So GV nghi hon 4 ngay : " << TH.Qua4Ngay(n) << endl;
}