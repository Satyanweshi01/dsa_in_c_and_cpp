#include <iostream>
using namespace std;

#define MAX 5
// three global array representing towers
// Source tower
int a[MAX] = {0,0,0,0,0};
// Auxiliary tower
int b[MAX] = {0,0,0,0,0};
// Destination tower
int c[MAX] = {0,0,0,0,0};


void print_tower(int array[],int disc_count);

int main(void)
{
    int discs, disc_weight, index;
    cout << "Type the number of discs in the source tower: " << endl;
    cin >> discs;
    disc_weight = discs;
    // inserting discs in the Source tower
    for (index = 0; index < discs; index++)
    {
        a[index] = disc_weight;
        disc_weight--;
    }
    
    print_tower(a,discs);
    return 0;
}

void print_tower(int array[],int disc_count)
{
    for (int i = 0; i< MAX; i++)
    {
        cout << array[i] << " ";
    }
}