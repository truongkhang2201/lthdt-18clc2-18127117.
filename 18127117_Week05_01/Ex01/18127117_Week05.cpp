#include"NhanVien.h"
#include"NVCongNhat.h"
#include"NVSanXuat.h"
int main()
{
	NVCongNhat cn;
	cn.input();
	cn.output();
	cout<<"Salary CN : "<<cn.calsalCN()<<endl;
	NVSanXuat sx;
	sx.input();
	sx.output();
	cout << "Salary SX : " << sx.calsalSX() << endl;
	system("pause");
}