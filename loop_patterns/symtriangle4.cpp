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
   for (int i = 0; i<a*2; i++)
    {
        //cout<<i;
        int stop,space_stop;
        if (i > a)
        {
            stop = i-a+1;
            space_stop = space_stop-2;
        }
        else if (i == a)
        {
            stop = 1;
        }
        else
        {
            stop = a-i;
            space_stop = i*2;
        }
        //cout<< " "<<stop;
        //cout<< " "<<space_stop;
        for (int j = 0; j<stop; j++)
        {
            cout << "*";
        }
        
        for (int k = 0; k<space_stop; k++)
        {
            cout << " ";
        }
        for (int h = 0; h<stop; h++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}