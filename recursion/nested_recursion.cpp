#include <iostream>
using namespace std;

int func(int a);
int main(void)
{
    cout << func(95);
    return 0;
}
int func(int a)
{
    if (a>100)
        return a-10;
    else
        return func(func(a+11));
}
