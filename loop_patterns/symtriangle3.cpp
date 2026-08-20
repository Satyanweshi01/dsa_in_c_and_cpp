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
   for (int i = 1; i<=(2*a)-1; i++)
    {
        int stars = i;
        if (i > a){stars = (2*a)-i;}
        for (int j = 0; j<stars; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}