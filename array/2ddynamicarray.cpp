#include <iostream>
using namespace std;

int main()
{
    // creating 2d dynamic array using array of integer pointers
    int* A[3];
    A[0] =  new int[4];
    A[1] =  new int[4];
    A[2] = new int[4];

    A[2][3] = 10;
    cout << A[2][3] << "\n";

    // by using double pointer
    int** B;
    B = new int*[3];
    B[0] = new int[4];
    B[1] = new int[4];
    B[2] = new int[4];


    B[2][3] = 10;
    cout << B[2][3] << "\n";
    return 0;
}