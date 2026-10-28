#include <iostream>
using namespace std;

int main()
{
    int A[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    
    cout << A+3 << "\n";
    cout << *(A+3) << "\n";

    cout << *(*(A+3)) << "\n";

    cout << *(A+2)+3 << "\n";
    cout << *(*(A+2)+3) << "\n";
 
    return 0;
}