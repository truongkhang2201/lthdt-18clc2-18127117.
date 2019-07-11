#include"NhanVien.h"
class NVCongNhat :public NhanVien {
public:
	void input();
	void output();
	//void inDay();
	int calsalCN();
	NVCongNhat();
	NVCongNhat(int x);
	NVCongNhat(const NVCongNhat &nv);
	NVCongNhat(string address, int day);
	NVCongNhat(Date day);
private:
	int DoW;
};
