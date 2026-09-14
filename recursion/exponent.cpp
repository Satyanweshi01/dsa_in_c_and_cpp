#include <iostream>
using namespace std;
int recursive_exponent(int b, int e);
int iterative_exponent(int b, int e);
int faster_recursive_exponent(int b, int e);
int main(void)
{
    int a,b;
    cin>>a;
    cin>>b;
    cout<<recursive_exponent(a,b)<<"\n";
    cout<<iterative_exponent(a,b)<<"\n";
    cout<<faster_recursive_exponent(a,b)<<"\n";
    return 0;
}
int recursive_exponent(int b, int e)
{
    if (e>0)
    {
        return b*recursive_exponent(b,e-1);
    }
    return 1;
}
int iterative_exponent(int b, int e)
{
    int result=1;
    for (int i = 0; i<e; i++)
    {
    result*=b;
    }
    return result;
}
int faster_recursive_exponent(int b, int e)
{
    if (e==0) return 1;
    if (e%2 == 0) return faster_recursive_exponent(b*b,e/2);
    else return b*faster_recursive_exponent(b*b,(e-1)/2);
    
}