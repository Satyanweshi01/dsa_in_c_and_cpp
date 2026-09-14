#include <iostream>
using namespace std;
int recursive_nsum(int a);
int algebraic_nsum(int a);
int iterative_nsum(int a);
int main(void)
{
    int a;
    cin>>a;
    cout<<recursive_nsum(a)<<"\n";
    cout<<algebraic_nsum(a)<<"\n";
    cout<<iterative_nsum(a)<<"\n";
}
int recursive_nsum(int a)
{
    if(a<=0)
        return 0;
    return a+recursive_nsum(a-1);
}
int algebraic_nsum(int a)
{
    return (a*(a+1))/2;
}
int iterative_nsum(int a)
{
    int sum = 0;
    for(int i = 1; i<=a; i++)
    {
        sum += i;
    }
    return sum;
}