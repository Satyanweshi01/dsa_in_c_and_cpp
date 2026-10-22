#include <iostream>
using namespace std;

int iterative_fibonacci(int n);
int recursive_fibonacci(int n);

int m[10] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int memorization_recursive_fibonacci(int n);



int main(void)
{
    cout << iterative_fibonacci(5) << endl;
    cout << iterative_fibonacci(7) << endl;
    cout << recursive_fibonacci(5) << endl;
    cout << recursive_fibonacci(7) << endl;
    cout << memorization_recursive_fibonacci(5) << endl;
    cout << memorization_recursive_fibonacci(7) << endl;
    return 0;
}
int iterative_fibonacci(int n)
{
    if (n<=1)
    {
        return n;
    }
    int t0 = 0, t1 = 1, s, i;
    for (int i = 2; i <= n; i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;         
    }
    return s;
}
int recursive_fibonacci(int n)
{
    if (n<=1)
    {
        return n;
    }
    return iterative_fibonacci(n-2) + iterative_fibonacci(n-1);

}
int memorization_recursive_fibonacci(int n)
{
    if (n<=1)
    {
        m[n] = n;
        return n;
    }
    else {
        if (m[n-2] == -1)
            m[n-2] = memorization_recursive_fibonacci(n-2);
        if (m[n-1] == -1)
            m[n-1] = memorization_recursive_fibonacci(n-1);
        return m[n-2] + m[n-1];
    }   
    return 0;
}