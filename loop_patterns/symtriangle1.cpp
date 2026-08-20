#include <iostream>
using namespace std;

void printing(int a);

int main()
{
    int a;
    cout << "Enter the row: ";
    cin >> a;
    printing(a);
    return 0;
}
void printing(int a)
{
   for (int i = 1; i<=a; i++)
    {
        for (int k = 0; k<a-i; k++)
        {
            cout << " ";
        }
        for (int j = 0; j<(2*i -1); j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}