#include <iostream>
using namespace std;

double recursive_taylor_func(int x, int n);
double iterative_horner_taylor_func(double x, double n);
double recursive_horner_taylor_func(double x, double n);


int main(void)
{
    cout << recursive_taylor_func(1,10)<< endl;
    cout << iterative_horner_taylor_func(1,10)<< endl;
    cout << recursive_horner_taylor_func(1,10) << endl;
    return 0;
}
double recursive_taylor_func(int x,int n)
{
    static double p = 1, f = 1;
    double result;
    if (n == 0) return 1;
    else
    {
        result = recursive_taylor_func(x, n-1);
        p = p*x;
        f = f*n;
    } 
    return result+p/f;
}
double iterative_horner_taylor_func(double x, double n)
{
    double r = 1;
    for (;n>0;n--)
    {
        r = r*(x/n) + 1;
    }
    return r;
}
double recursive_horner_taylor_func(double x, double n)
{
    static double r = 1;
    if (n == 0) return r;
    r = r*(x/n) + 1;
    return recursive_horner_taylor_func(x,n-1);
}