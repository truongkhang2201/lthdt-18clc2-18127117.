#include "GiaoVien.h"
#include "GVCN.h"

int main()
{
	GVCN gvcn;
	gvcn.input();
	gvcn.output();
	cout << "Luong GVCN: " << gvcn.luong() << endl;
	system("pause");
}