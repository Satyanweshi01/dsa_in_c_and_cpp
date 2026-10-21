#include <iostream>
using namespace std;

int f(int x);

int main(void)
{
    cout<<f(6)<<endl;
    return 0;
}
int f(int x)
{
    if (x==0) return 0;
    return f(x-1)+x;
}