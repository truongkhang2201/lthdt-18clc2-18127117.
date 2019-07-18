#ifndef _NVCONGNHAT_H_
#define _NVCONGNHAT_H_
#include"NhanVien.h"

class NVCongNhat :public NhanVien {
public:
	void input();
	void output();
	double calSal();
	NVCongNhat();
	NVCongNhat(int x);
	NVCongNhat(const NVCongNhat &nv);
	~NVCongNhat();
	//NVCongNhat(string address, int day);
	//NVCongNhat(Date day);
private:
	int DoW;
};

#endif
