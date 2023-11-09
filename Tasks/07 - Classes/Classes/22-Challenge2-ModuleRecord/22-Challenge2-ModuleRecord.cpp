
#include "ModuleRecord.h"

int main()
{
    ModuleRecord m1("HTML","Comp",1004,40,2);

    m1.display();

    cout << "Enter the Module Name, Subject area, Module Code, Module Credits and the semester length" << endl;

    string MN;
    string SA;
    unsigned int MC;
    unsigned int MCR;
    unsigned int SL;

    cin >> MN;
    cin >> SA;
    cin >> MC;
    cin >> MCR;
    cin >> SL;
        
    ModuleRecord m2(MN, SA, MC, MCR, SL);
    m2.display();

}