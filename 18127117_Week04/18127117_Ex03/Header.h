#pragma once

#include <iostream>

using namespace std;

class IntArray
{
private:
	int *a, n;
public:
	IntArray(int = 0);
	IntArray(int *A, int size);
	IntArray(const IntArray &A);
	~IntArray();
	friend istream& operator >> (istream &, const IntArray &);
	friend ostream& operator << (ostream &, const IntArray &);
	int &operator [] (int) const;
	const IntArray &operator= (const IntArray &);
	operator int() const;
};


