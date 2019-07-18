#include"DG.h"
#include"DGThuong.h"
#include"DGVip.h"
#include"ThuVien.h"

int main()
{
	int n;
	cout << "Nhap so DG:" << endl;
	cin >> n;
	
	ThuVien TV;
	TV.input(n);
	TV.output(n);

	cout << "Tong le phi : " << TV.tongPhi(n);
	TV.phiCaonhat(n);
	cout << "So DG thuong  :" << TV.demThuong();
	cout << "so DG Vip : " << TV.demVip();

	TV.phiTren30000(n);

	TV.maDG(n);
	TV.tenDG(n);

	cout << "So DG het han nam 2017 :" << TV.HH2017(n) << endl;
	system("pause");
}