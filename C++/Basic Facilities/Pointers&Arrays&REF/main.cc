
#include "main.hh"

#define LOG(x) cout<<x<<" ";

using namespace std;

/**
 * @printArr() - this aaccepts an array as arguement using a pointer
 * @print_muti_dim() -this also print a multi dimensional array with pointers
 * @myRef() - this is to print a reference
*/


int main(void)
{

    // int v[10];
    // int v1[3][5];
    // printArr(v);
    // // cout<<printArr(v) << " ";
    // print_muti_dim(&v1[0][0],3,5);
    myRef();
    return 0;
}

void printArr(int* args)
{
    for(int i= 0; i != 10; ++i)
    {
        args[i] += args[i];
    }
        cout << (args[2]) << " ";
}
void print_muti_dim(int* m,int dim1,int dim2)
{

    for(int i=0; i != dim1; i++)
    {
        for(int j=0; j != dim2;j++)
        {
            LOG(m[i*dim2+j]);
        }
    }
}

void myRef()
{
    int var = 1; //var set to 1
    cout<< " var = " << var << " ";

    int& ref = var; // ref is a reference to var, hence ref = 1
    cout<< " ref = " << ref << " ";
    int x = ref ; //x = 1
    cout<< " x = " << x << " ";
    ref = 2; //var is now 2
    cout<< " var = " << var << " ";
    
}