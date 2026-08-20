#include <iostream>
using namespace std;

void printing(int a);
int depth(int i, int j, int size);


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
    int boundary = ((a*2)-1);
    for (int i = 0; i<boundary; i++)
    {
        for (int j = 0; j<boundary; j++)
        {
            int cell_depth = depth(i,j,boundary-1);
            cout << a-cell_depth << " ";
        }
        cout << "\n";
    }
}
int depth(int i, int j, int size)
{
    int top = i, left = j, bottom = size - i, right = size - j;
    int current_min;
    current_min = min(min(top,left),min(bottom,right));
    return current_min; 
}