#include"DG.h"
DG::DG() {
	ID = 0;
	name = "";
	Exp.d = 0;
	Exp.m = 0;
	Exp.y = 0;
	Gender = "";
	NoB = 0;
}
DG::DG(int ms) {
	ID = ms;
	name = "";
	Exp.d = 0;
	Exp.m = 0;
	Exp.y = 0;
	Gender = "";
	NoB = 0;
}
DG::DG(string n)
{
	ID = 0;
	name = n;
	Exp.d = 0;
	Exp.m = 0;
	Exp.y = 0;
	Gender = "";
	NoB = 0;
}
DG::DG(Date d, string gen, int num) {
	ID = 0;
	name = "";
	Exp.d = d.d;
	Exp.m = d.m;
	Exp.y = d.y;
	Gender = gen;
	NoB = num;
}
DG::DG(const DG &dg) {
	ID = dg.ID;
	name = dg.name;
	Exp.d = dg.Exp.d;
	Exp.m = dg.Exp.m;
	Exp.y = dg.Exp.y;
	Gender = dg.Gender;
	NoB =dg.NoB;
}