#include <iostream>
using namespace std;

void funcA(int a);
void funcB(int b);

int main(void)
{
    int a;
    cin>>a;
    funcA(a);
    return 0;
}
void funcA(int a)
{
    if (a>0)
    {
        cout<<a<<" ";
        funcB(a-1);
    }
}
void funcB(int b)
{
    if (b>1)
    {
        cout<<b<<" ";
        funcA(b-2);
    }
}