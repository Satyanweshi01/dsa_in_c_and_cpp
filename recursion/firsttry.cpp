#include <iostream>
using namespace std;

void print1(int n);
void print2(int n);
int main(void)
{
    print1(7);
    cout<<"\n";
    print2(7);
    cout<<"\n";
    return 0;
}
void print1(int n)
{
    if (n>0)
    {
        print1(n-1);
        cout << n <<" ";
    }
}
void print2(int n)
{
    if (n>0)
    {
        cout<<n<<" ";
        print2(n-1);
    }

}