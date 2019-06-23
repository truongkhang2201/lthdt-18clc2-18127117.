#pragma once
#pragma once

#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;
class Date
{
private:
	int day, month, year;
public:
	void Nhap();
	Date();
	Date(int, int, int);
	Date(int, int);
	Date(int);
	~Date();

	Date NgaySau();
	Date NgayTruoc();

	bool operator ==(const Date &d);
	bool operator !=(const Date &d);
	bool operator >=(const Date &d);
	bool operator <=(const Date &d);
	bool operator >(const Date &d);
	bool operator <(const Date &d);

	friend ostream& operator <<(ostream& out, const Date& d);
	friend istream & operator >>(istream& in, Date& d);
	Date operator ++(int);
	Date operator ++();
	Date operator --(int);
	Date operator --();
	Date operator+ (int y);
	Date operator- (int y);
	Date & operator +=(int day);
	Date & operator -=(int day);

	int KhoangCachNgay(int, int, int);

	operator int();
	operator long();
};


