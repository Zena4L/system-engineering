#include "vars.hh"

/**
 * @printVars() - print various assigned variables
 * @printSize() - print size of various types
*/


int main(void)
{
    printVars();

    LOG("\nSizes --------\n");
    printSize();

    return 0;
}
void printVars()
{
    builtin vars;
    builtin *pvars = &vars;

    pvars->myBoolean = 1;
    pvars->myChar = 'A';
    pvars->myInt = 20;
    pvars->myLongInt = 1000000000000;
    pvars->myLongLongInt = 1234567891011;
    pvars->mySignedInt = 3;
    pvars->myUnsignedInt = -(3);
    cout<< "Boolean : " <<pvars->myBoolean<<" \n";
    cout<< "Char : " <<pvars->myChar<<" \n";
    cout<< "Int : " <<pvars->myInt<<" \n";
    cout<< "Long Int : " <<pvars->myLongInt<<" \n";
    cout<< "Long Long Int : " <<pvars->myLongLongInt<<" \n";
    cout<< "Signed Int : " <<pvars->mySignedInt<<" \n";
    cout<< "Unsigned Int : " <<pvars->myUnsignedInt<<" \n";
}

void printSize()
{
    builtin vars;
    builtin *pvars = &vars;

    LOG(sizeof(pvars->myBoolean));
    LOG(sizeof(pvars->myChar));
    LOG(sizeof(pvars->myInt));
    LOG(sizeof(pvars->myLongInt));
    LOG(sizeof(pvars->myLongLongInt));
    LOG(sizeof(pvars->mySignedInt));
    LOG(sizeof(pvars->myUnsignedInt));
    LOG(sizeof(vars));
}

