#include <iostream>
using namespace std;

void printing(int a);

int main()
{
    int a;
    cout<<"Enter the row: ";
    cin>>a;
    printing(a);
    return 0;
}
void printing(int a)
{
    for (int i = 1; i<=a; i++)
    {
        int value = 1;
        if (i%2 == 0){value = 0;}
        for(int j = 0; j<i; j++)
        {
            
            cout<<value<<" ";
            //if (value == 0){value = 1;}
            //else{value = 0;}
            value = 1 - value;
        }
        cout<<"\n";
    }
}