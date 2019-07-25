#include"CFile.h"

string CFile::getVar()
{
	return var;
}
string CFile::getName()
{
	return name;
}
int CFile::getSize()
{
	return size;
}
CFile::CFile(const string &n, const int &s)
{
	name = n;
	size = s;
	var = "File";
}
void CFile::setHidden(bool x, bool y)
{
	hidden = x;
}
