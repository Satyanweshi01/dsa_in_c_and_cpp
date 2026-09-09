#include <iostream>
using namespace std;

int func(int n);
int main(void)
{
    int n;
    cin>>n;
    cout<<func(n)<<endl;
    return 0;
}
int func(int n)
{
    static int x = 0;
    if (n>0)
    {
        x++;
        return func(n-1)+x;
    }
    return 0;
}