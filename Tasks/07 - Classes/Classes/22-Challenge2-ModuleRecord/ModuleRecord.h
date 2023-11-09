#pragma once
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class ModuleRecord
{
private:
	string fullspec;
	string moduleName;
	string subjectArea;
	string Code;
	unsigned int moduleCode;
	unsigned int credits = 20;
	unsigned int semesters = 1;

	void updateRecord()
	{
		inttostring();

		fullspec = subjectArea + " " + Code + " " + moduleName;
	}

public:

	ModuleRecord(string modName, string subArea, unsigned int modCode, unsigned int cred, unsigned int sem);

	void updatemoduleName(string modN);
	void updatesubjectArea(string subA);
	void updatemoduleCode(unsigned int modC);
	void updatecredits(unsigned int cre);
	void updatesemesters(unsigned int seme);
	void inttostring();

	void display();
};

