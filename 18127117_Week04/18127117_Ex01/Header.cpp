#include "Header.h"

void Date::Nhap()
{
	cout << "Ngay: ";
	cin >> day;
	cout << "Thang: ";
	cin >> month;
	cout << "Nam: ";
	cin >> year;
}
Date::Date(int ngay, int thang, int nam)
{
	day = ngay;
	month = thang;
	year = nam;
}
Date::Date()
{
	day = 2;
	month = 11;
	year = 2012;
};
Date::Date(int a, int b)
{
	day = 1;
	year = a;
	month = b;
}
Date::Date(int y)
{
	day = 1;
	month = 1;
	year = y;
}

Date::~Date() {}
Date Date::NgayTruoc()
{
	Date temp;
	if (day == 1 && (month == 1 || month == 2 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12))
	{
		if (month == 1)
		{
			month = 12;
			day = 32;
			year = year - 1;
		}
		else if (month == 2 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		{
			day = day - 1;
			month = month - 1;
		}
	}
	if (day == 1 && (month == 4 || month == 6 || month == 9 || month == 11))
	{
		day = 30;
		month = month - 1;
	}
	if (day == 1 && month == 3)
	{
		day = 28;
		month = month - 1;
	}
	else
	{
		day = day - 1;
	}
	temp.day = day;
	temp.month = month;
	temp.year = year;
	return temp;
}
Date Date::NgaySau()
{
	Date temp;
	if (day == 31 && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12))
	{
		if (month == 12)
		{
			month = 1;
			day = 0;
			year = year + 1;
		}
		else
		{
			day = 0;
			month = month + 1;
		}
	}
	if (day == 30 && (month == 4 || month == 6 || month == 9 || month == 11))
	{
		day = 0;
		month = month + 1;
	}
	if (day == 28 && month == 2)
	{
		day = 1;
		month = month + 1;
	}
	else
	{
		day = day + 1;
	}
	temp.day = day;
	temp.month = month;
	temp.year = year;
	return temp;
}

bool Date:: operator ==(const Date &d)
{
	if (day == d.day && month == d.month && year == d.year)
	{
		return true;
	}
	return false;
}
bool Date:: operator !=(const Date &d)
{
	if (day != d.day || month != d.month || year != d.year)
	{
		return true;
	}
	return false;
}
bool Date:: operator >=(const Date &d)
{
	if (day >= d.day || month >= d.month || year >= d.year)
	{
		return true;
	}
	return false;
}
bool Date:: operator <=(const Date &d)
{
	if (day <= d.day || month <= d.month || year <= d.year)
	{
		return true;
	}
	return false;
}
bool Date:: operator >(const Date &d)
{
	if (year > d.year)
	{
		return true;
	}
	if (year == d.year && month > d.month)
	{
		return true;
	}
	if (year == d.year && month == d.month && day > d.day)
	{
		return true;
	}
	return false;
}
bool Date:: operator <(const Date &d)
{
	if (year < d.year)
	{
		return true;
	}
	if (year == d.year && month < d.month)
	{
		return true;
	}
	if (year == d.year && month == d.month && day < d.day)
	{
		return true;
	}
	return false;
}
Date::operator int()
{
	int x = KhoangCachNgay(this->year, this->month, this->day) - KhoangCachNgay(this->year, 1, 1);
	return x;
}
Date::operator long()
{
	int x = KhoangCachNgay(this->year, this->month, this->day) - KhoangCachNgay(1, 1, 1);
	return x;
}
ostream& operator<<(ostream& out, const Date& d)
{
	out << d.day << "/" << d.month << "/" << d.year;
	return out;
}
istream & operator>>(istream& in, Date& d)
{
	in >> d.day;
	in.ignore(1);
	in >> d.month;
	in.ignore(1);
	in >> d.year;
	return in;
}

// postfix
Date Date::operator ++(int)
{
	Date d = *this;
	*this = d.NgaySau();
	return d;
}

// prefix
Date Date::operator ++()
{
	*this = NgaySau();
	return *this;
}
// postfix
Date Date::operator --(int)
{
	Date d = *this;
	*this = NgayTruoc();
	return d;
}
// prefix
Date Date::operator --()
{
	*this = NgayTruoc();
	return *this;
};
Date Date :: operator +(int y)
{
	Date tmp = *this;
	for (int i = 0; i < y; i++)
	{
		tmp++;
	}
	return tmp;
}
Date Date :: operator -(int y)
{
	Date tmp = *this;
	for (int i = 0; i < y; i++)
	{
		tmp--;
	}
	return tmp;
}

Date& Date::operator +=(int day)
{
	for (int i = 0; i < day; i++)
	{
		(*this)++;
	}
	return *this;
}
Date& Date::operator -=(int day)
{
	for (int i = 0; i < day; i++)
	{
		(*this)--;
	}
	return *this;
}
int Date::KhoangCachNgay(int day, int month, int year)
{
	if (month < 3)
	{
		year--;
		month += 12;
	}
	return 365 * year + year / 4 - year / 100 + year / 400 + (153 * month - 457) / 5 + day - 306;
}



