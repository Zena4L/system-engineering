#include <iostream>
#include <vector>

using namespace std;

#define LOG(x) cout<<x<<endl

struct Address
{
    const string name;
    char* phone;
    char* street;
    char* town;
    int id;

    // Address(const string name,const string& ph,const string& st,const string& tw, int id);
};
struct Point{
    int x,y;
} ;

enum class Color {red,green,yello};

void createNode();

using Ad = Address;

void sendMail(Ad mailer);
void print_addr(Ad* p);

