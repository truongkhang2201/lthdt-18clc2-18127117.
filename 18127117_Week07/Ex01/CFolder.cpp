#include"CFOLDER.h"

CFolder::CFolder(string fol)
{
	name = fol;
	size = 0;
	var = "Folder";
}
string CFolder::getVar()
{
	return var;
}
string CFolder::getName()
{
	return name;
}
int CFolder::getSize()
{
	return size;
}
void CFolder::add(CFile *file)
{
	nFile++;
	size += file->getSize();
	files.push_back(file);
}
void CFolder::add(CFolder *folder)
{
	nFolder++;
	size += folder->getSize();
	files.push_back(folder);
}
void CFolder::print(const int &src)
{
	if (src == 0) {
		cout << " Subfolders: "<<endl;
		for (int i = 0; i != files.size(); i++) {
			if (files[i]->getVar() == "Folder") {
				cout << i + 1 << " > " << files[i]->getName() << endl;
			}
		}
	}
	else if (src == 1) {
		cout << " Files: "<<endl;
		for (int i = 0; i != files.size() - 1; i++) {
			if (files[i]->getVar() == "File") {
				cout << files[i]->getName() << endl;
			}
		}
	}
	else {
		cout << " Cannot print";
	}
}
void CFolder::setHidden(bool x, bool y)
{
	if (x == true) {
		this->hidden = true;
		vector<CItem*>::iterator i;
		for (i = files.begin(); i != files.end(); i++) {
			(*i)->setHidden(true, true);
		}
	}
	else {
		this->hidden = false;
		vector<CItem*>::iterator i;
		for (i = files.begin(); i != files.end(); i++) {
			(*i)->setHidden(false, false);
		}
	}
}
CItem* CFolder::removeByName(const string fol)
{
	vector<CItem*>::iterator i;
	for (i = files.begin(); i != files.end(); i++) {
		if ((*i)->getName() == fol) {
			files.erase(i);
			return this;
		}
	}
	return NULL;
}
CItem* CFolder::findByName(const string fol) {
	vector<CItem*>::iterator i;
	for (i = files.begin(); i != files.end(); i++) {
		if ((*i)->getName() == fol) {
			cout << "Founded!";
			return (*i);
		}
		else cout << "Not Found!";
	}
	return NULL;
}

