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
    for (int i = 0; i<a; i++)
    {
        for (int j = 0; j<i+1; j++)
        {
            cout << j+1;
        }
        for(int k = 0; k < (a*2 - (i+1)*2); k++)
        {
            cout << " ";
        }
        for (int j = i; j>-1; j--)
        {
            cout << j+1;
        }
        cout << "\n";
    }
}