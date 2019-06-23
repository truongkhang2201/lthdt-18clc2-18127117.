#pragma once

#include <iostream>
#include <cmath>

using namespace std;

class Fraction
{
private:
	int tu;
	int mau;
public:
	Fraction();
	Fraction(int, int);
	Fraction(Fraction &f);
	Fraction(int t);
	Fraction &operator =(const Fraction&);
	Fraction &operator +(const Fraction&);
	Fraction &operator +(int);

	Fraction &operator -(const Fraction&);
	Fraction &operator -(int);

	Fraction &operator *(const Fraction&);
	Fraction &operator /(const Fraction&);
	Fraction &operator +=(const Fraction&);
	Fraction &operator -=(const Fraction&);
	Fraction &operator *=(const Fraction&);
	Fraction &operator /=(const Fraction&);
	bool operator ==(const Fraction&);
	bool operator >=(const Fraction&);
	bool operator <=(const Fraction&);
	bool operator >(const Fraction&);
	bool operator <(const Fraction&);
	bool operator !=(const Fraction&);

	friend ofstream &operator <<(ofstream &out, Fraction &f);

	Fraction &operator++(int);
	Fraction &operator--(int);
	Fraction &operator++();
	Fraction &operator--();


	operator float() const;
	void PhanSo(int, int);
};


