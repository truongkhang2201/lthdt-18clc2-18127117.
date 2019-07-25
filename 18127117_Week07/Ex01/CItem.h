#include<string>
#include<vector>
#include<iostream>
using namespace std;
class CItem {
protected:
	string name;
	string var;
	int size;
	bool hidden;
public:
	virtual int getSize() ;
	virtual void print(const int& src) ;
	virtual void setHidden(bool x, bool y);
	virtual string getVar();
	virtual string getName();
};
