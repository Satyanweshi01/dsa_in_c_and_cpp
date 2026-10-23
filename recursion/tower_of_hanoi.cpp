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


void print_tower(int array[],string tower_name);
void tower_of_hanoi(int source[], int auxiliary[] ,int destination[], int disc_count);

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
    
    tower_of_hanoi(a,b,c,discs);
    return 0;
}

void tower_of_hanoi(int source[], int auxiliary[] ,int destination[], int disc_count)
{
    cout << "Previous state\n";
    print_tower(source, "Source Tower: ");
    print_tower(auxiliary, "Auxiliary Tower: ");
    print_tower(destination, "Destination Tower: ");
    cout << "\n";
    if (disc_count == 1){


        destination[0] = source[0];
        source[0] = 0;
        cout << "Current state\n";
        print_tower(source, "Source Tower: ");
        print_tower(auxiliary, "Auxiliary Tower: ");
        print_tower(destination, "Destination Tower: ");
        return;
    }
    // for the case of disc_count == 1
    // destination[0] = source[0];
    // source[0] = 0;
    tower_of_hanoi(source,auxiliary,destination,disc_count-1);
    tower_of_hanoi(auxiliary,destination,source,disc_count-1);
    
}

void print_tower(int array[],string tower_name)
{
    cout << tower_name;
    for (int i = 0; i< MAX; i++)
    {
        cout << array[i] << " ";
    }
    cout << "\n";
}