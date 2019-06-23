#include "Header.h"

Fraction::Fraction()
{
	tu = 0;
	mau = 1;
}
Fraction::Fraction(int n, int d)
{
	tu = n;
	mau = d;
}
Fraction::Fraction(Fraction &f)
{
	tu = f.tu;
	mau = f.mau;
}
Fraction::Fraction(int t)
{
	PhanSo(t, 1);
}
Fraction &Fraction::operator =(const Fraction &fr)
{
	Fraction f;
	f.tu = fr.tu;
	f.mau = fr.mau;
	return *this;
}
Fraction &Fraction::operator +(const Fraction &fr)
{
	Fraction f;
	f.tu = f.tu * fr.mau + f.mau * fr.tu;
	f.mau = f.mau * fr.mau;
	return f;
}
Fraction &Fraction::operator +(int a)
{
	Fraction f;
	f.tu = f.tu * 1 + f.mau * a;
	f.mau = f.mau * 1;
	return f;
}
Fraction &Fraction::operator -(int a)
{
	Fraction f;
	f.tu = f.tu * 1 - f.mau * a;
	f.mau = f.mau * 1;
	return f;
}
Fraction &Fraction::operator -(const Fraction &fr)
{
	Fraction f;
	f.tu = f.tu * fr.mau - f.mau * fr.tu;
	f.mau = f.mau * fr.mau;
	return f;
}
Fraction &Fraction::operator *(const Fraction &fr)
{
	Fraction f;
	f.tu = f.tu *fr.tu;
	f.mau = f.mau * fr.mau;
	return f;
}
Fraction &Fraction::operator /(const Fraction &fr)
{
	Fraction f;
	f.tu = f.tu *fr.mau;
	f.mau = f.mau * fr.tu;
	return f;
}
Fraction &Fraction::operator +=(const Fraction &fr)
{
	tu = tu * fr.mau + mau * fr.tu;
	mau = mau * fr.mau;
	return *this;

}
Fraction &Fraction::operator -=(const Fraction &fr)
{
	tu = tu * fr.mau - mau * fr.tu;
	mau = mau * fr.mau;
	return *this;

}
Fraction &Fraction::operator *=(const Fraction &fr)
{
	tu = tu * fr.tu;
	mau = mau * fr.mau;
	return *this;

}
Fraction &Fraction::operator /=(const Fraction &fr)
{
	tu = tu * fr.mau;
	mau = mau * fr.tu;
	return *this;

}
bool Fraction::operator ==(const Fraction &fr)
{
	if (tu == fr.tu&&mau == fr.mau)
	{
		return true;
	}
	return false;
}
bool Fraction::operator >=(const Fraction &fr)
{
	if (tu*1.0 / mau >= fr.tu*1.0 / fr.mau)
	{
		return true;
	}
	return false;
}
bool Fraction::operator <=(const Fraction &fr)
{
	if (tu*1.0 / mau <= fr.tu*1.0 / fr.mau)
	{
		return true;
	}
	return false;
}
bool Fraction::operator !=(const Fraction &fr)
{
	if (tu*1.0 / mau == fr.tu*1.0 / fr.mau)
	{
		return false;
	}
	return true;
}
bool Fraction::operator >(const Fraction &fr)
{
	if (tu*1.0 / mau > fr.tu*1.0 / fr.mau)
	{
		return true;
	}
	return false;
}
bool Fraction::operator <(const Fraction &fr)
{
	if (tu*1.0 / mau < fr.tu*1.0 / fr.mau)
	{
		return true;
	}
	return false;
}
ofstream &operator <<(ofstream &out, Fraction &fr)
{
	cout << fr.tu << "/" << fr.mau << endl;
	return out;
}
Fraction &Fraction::operator ++()
{
	tu = tu + mau;
	return *this;
}
Fraction &Fraction::operator --()
{
	tu = tu - mau;
	return *this;
}
Fraction &Fraction::operator ++(int)
{
	Fraction f = *this;
	++(*this);
	return f;
}
Fraction &Fraction::operator --(int)
{
	Fraction f = *this;
	--(*this);
	return f;
}
Fraction::operator float() const
{
	return float(tu) / float(mau);
}
void Fraction::PhanSo(int a, int b)
{
	this->tu = a;
	this->mau = b;
}
