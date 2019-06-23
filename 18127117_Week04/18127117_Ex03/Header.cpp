#include "Header.h"

IntArray::IntArray(int size)
{
	n = size;

	a = new int[n];

	for (int i = 0; i < n; i++)
	{
		a[i] = 0;
	}
}

IntArray::IntArray(int *A, int size)
{
	n = size;
	a = new int[n];
	A = new int[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = A[i];
	}
}

IntArray::IntArray(const IntArray &A)
{
	n = A.n;

	a = new int[n];


	for (int i = 0; i < n; i++)
	{
		a[i] = A.a[i];
	}
}

IntArray::~IntArray() {}

istream& operator >> (istream &in, const IntArray &A)
{
	for (int i = 0; i < A.n; i++)
	{
		in >> A.a[i];
	}
	return in;
}

ostream& operator << (ostream &out, const IntArray &A)
{
	for (int i = 0; i < A.n; i++)
	{
		out << A.a[i];
	}
	return out;
}

int &IntArray::operator [] (int size) const
{
	if (size >= 0 && size < n)
	{
		return this->a[size];
	}
}

const IntArray &IntArray::operator= (const IntArray & right)
{
	if (&right != this)
	{
		if (n != right.n)
		{
			delete[] a;
			n = right.n;
			a = new int[n];
		}
	}
	for (int i = 0; i < n; i++)
	{
		a[i] = right.a[i];
	}
	return *this;
}

IntArray::operator int() const
{
	return *a;
}
