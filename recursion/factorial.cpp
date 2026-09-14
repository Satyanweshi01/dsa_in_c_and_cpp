#include <iostream>
using namespace std;

int recursive_factorial(int a);
int iterative_factorial(int a);

int main(void)
{
    int a;
    cin>>a;
    cout<<recursive_factorial(a)<<"\n";
    cout<<iterative_factorial(a)<<"\n";
    return 0;
}
int recursive_factorial(int a)
{
    if (a<0) return -1;
    if (a==0) return 1;
    //cout<<a<<" ";
    return a*recursive_factorial(a-1);
}
int iterative_factorial(int a)
{
    int result=1;
    for ( int i = 1; i<=a; i++)
    {
        result*=i;
    }
    return result;
}