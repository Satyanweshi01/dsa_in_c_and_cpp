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
        for (char ch = 'A'; ch<= 'A'+(a-i); ch++)
        {
            cout << ch << " ";
        }
        cout << "\n";
    }
}