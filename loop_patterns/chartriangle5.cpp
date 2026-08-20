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
         
        for (int j = i; j>=0; j--)
        {
            char ch = 'A'+(a-1); 
            ch = ch - j;
            cout << ch << " ";
        }
        cout << "\n";
    }
}