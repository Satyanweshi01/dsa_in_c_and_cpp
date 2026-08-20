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
    int space_stop = a*2-2;
   for (int i = 1; i<=(2*a)-1; i++)
    {
        int stars = i;


        //cout << space_stop;
        if (i > a){stars = (2*a)-i;}
        for (int j = 0; j<stars; j++)
        {
            cout << "*";
        }
        for (int k = 0; k<space_stop; k++)
        {
            cout << " ";
        }
        for (int h = 0; h<stars; h++)
        {
            cout << "*";
        }
        cout << "\n";
        if (i<a) space_stop -= 2;
        else space_stop += 2;
    }
}