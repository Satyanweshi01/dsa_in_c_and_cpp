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
int get_empty_index(int tower[]);

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

int get_empty_index(int tower[])
{   int i;
    for(i = 0; i<MAX; i++)
    {
        if(tower[i]==0) return i;
    }
    return -1;
}

void tower_of_hanoi(int source[], int auxiliary[] ,int destination[], int disc_count)
{
    int destination_index = get_empty_index(destination);
    if (disc_count == 0){


        destination[destination_index] = source[disc_count];
        source[disc_count] = 0;
        cout << "Current state1\n";
        print_tower(source, "Source Tower: ");
        print_tower(auxiliary, "Auxiliary Tower: ");
        print_tower(destination, "Destination Tower: ");
        return;
    }
    tower_of_hanoi(source,auxiliary,destination,disc_count-1);

    destination[destination_index] = source[disc_count];
    source[disc_count] = 0;

    cout << "Current state2\n";
    print_tower(source, "Source Tower: ");
    print_tower(auxiliary, "Auxiliary Tower: ");
    print_tower(destination, "Destination Tower: ");

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