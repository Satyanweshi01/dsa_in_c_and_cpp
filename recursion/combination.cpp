#include <iostream>
using namespace std;

int pascals_triangle_combination(int n, int r);

int main(void)
{
    cout << pascals_triangle_combination(4,0) << endl;
    cout << pascals_triangle_combination(4,4) << endl;
    cout << pascals_triangle_combination(4,2) << endl;
    return 0;
}

int pascals_triangle_combination(int n, int r)
{
    if (r == 0 || n == r) return 1;
    else return pascals_triangle_combination(n-1,r-1) + pascals_triangle_combination(n-1,r);
}