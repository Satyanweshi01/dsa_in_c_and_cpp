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
        for (int k = a-1-i; k>0; k--)
        {
            cout << " ";
        }
        //char ch = '@';  
        char ch = 'A';  
        for (int j = 0; j<(2*i +1); j++)
        {
            cout << ch;
            if (j < i) ch++; 
            else ch--;
        }
        cout << "\n";
    }
}