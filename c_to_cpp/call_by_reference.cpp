#include <iostream>

using namespace std;

void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main(void)
{
    int a = 10,b = 21;
    cout<<"a is "<<a<<endl;
    cout<<"b is "<<b<<"\n\n";
    swap(a,b);
    cout<<"a is "<<a<<endl;
    cout<<"b is "<<b<<endl;

    return 0;
}

