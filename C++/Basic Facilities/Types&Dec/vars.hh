#include <iostream>
#include <cstddef>


using namespace std;

#define LOG(x) cout<<x<<endl

typedef struct builtin
{
    int myInt;
    bool myBoolean;
    char myChar;
    int long myLongInt;
    unsigned int myUnsignedInt;
    signed int mySignedInt;
    int long long myLongLongInt;
} builtin;

void printVars();
void printSize();
