#include "DG.h"
#include "DGthuong.h"
#include "DGVip.h"
int main() {
	DGthuong dgthuong;
	dgthuong.inputThuong();
	dgthuong.outputThuong();
	cout << "Phi doc gia thuong :" << dgthuong.phiThuong() << endl;

	DGVip dgvip;
	dgvip.inputVip();
	dgvip.outputVip();
	cout << "Phi doc gia vip :" << dgvip.phiVip() << endl;
	system("pause");
}