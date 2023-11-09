#include "ModuleRecord.h"

using namespace std;



	ModuleRecord::ModuleRecord(string modName, string subArea, unsigned int modCode, unsigned int cred, unsigned int sem)
	{
		moduleName = modName;
		subjectArea = subArea;
		moduleCode = modCode;
		credits = cred;
		semesters = sem;

		updateRecord();
	}

	void ModuleRecord::updatemoduleName(string modN)
	{
		if (moduleName != modN)
		{
			moduleName = modN;
			updateRecord();
		}
	}

	void ModuleRecord::updatesubjectArea(string subA)
	{
		if (subjectArea != subA)
		{
			subjectArea = subA;
			updateRecord();
		}
	}

	void ModuleRecord::updatemoduleCode(unsigned int modC)
	{
		if (moduleCode != modC)
		{
			moduleCode = modC;
			updateRecord();
		}
	}

	void ModuleRecord::updatecredits(unsigned int cre)
	{
		if (credits != cre)
		{
			credits = cre;
			updateRecord();
		}
	}

	void ModuleRecord::updatesemesters(unsigned int seme)
	{
		if (semesters != seme)
		{
			semesters = seme;
			updateRecord();
		}
	}

	void ModuleRecord::inttostring()
	{
		string strCode = "0000";
		unsigned int code = moduleCode;
		strCode = to_string(code);
		Code = strCode;
	}


	void ModuleRecord::display()
	{
		cout << endl << endl;
		cout << fullspec << endl;
		cout << "The module lasts for " << semesters << " semester and is worth " << credits << " credits." << endl;
	}


