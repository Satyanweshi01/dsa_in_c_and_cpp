#include <iostream>
using namespace std;

int main(void)
{
    int a = 19;
    int &r = a;
    cout<<a<<endl;
    r++;
    r += 2;
    cout<<a<<endl;
    int b = 21;
    r = b;
    cout<<a<<endl;
    cout<<r<<endl;
    cout<<b<<endl;
}