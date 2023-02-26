#include <iostream>

using namespace std;

#define LOG(x) cout<<x<<endl;

int main(void)
{
    int p = 3;
    int* vp = &p;
    LOG(&p);
    LOG(p);
    LOG(*vp);
    LOG(vp);
    LOG(&vp);

    if(vp != nullptr)
        LOG("Not a nullptr");
    return 0;
}