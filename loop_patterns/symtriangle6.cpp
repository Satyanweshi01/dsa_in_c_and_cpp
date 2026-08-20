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
        for (int j = 0; j<a; j++)
        { 
            if (j == 0 || j == a-1 || i == 0 || i == a-1)
                cout << "*";
            
            else    cout << " ";
        }
        cout << "\n";
    }
}