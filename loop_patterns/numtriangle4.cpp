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
    int value = 1;
    for (int i = 0; i<a; i++)
    {
        
        for (int j = 0; j<i+1; j++)
        {
            cout << value << " ";
            value++;
        }
        cout << "\n";
    }
}