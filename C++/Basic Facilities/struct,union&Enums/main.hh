#include <iostream>

using namespace std;

#define LOG(x) cout<<x<<endl

struct Address
{
    const char* name;
    char* phone;
    char* street;
    char* town;
};

void createNode();

using Ad = Address;

void sendMail(Ad mailer);
void print_addr(Ad* p);

