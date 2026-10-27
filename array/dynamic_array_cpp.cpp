#include <iostream>
using namespace std;

int main()
{
    int *p;
    p = new int[5]; // dynamic array
    *p = 3;
    *(p+1) = 5;
    *(p+2) = 10;
    cout << *p << " " << p << "\n";
    cout << *(p+1) << " " << p+1 << "\n";
    cout << *(p+2) << " " << p+2 << "\n";
    delete[] p;

}