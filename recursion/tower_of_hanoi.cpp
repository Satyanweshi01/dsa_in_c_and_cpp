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
int get_last_disk_index(int tower[]);

int main(void)
{
    int discs, disc_weight, index;
    do {
    cout << "Type the number of discs in the source tower: " << endl;
    cin >> discs;

    }while (discs>MAX || discs<0);
    disc_weight = discs;
    // inserting discs in the Source tower
    for (index = 0; index < discs; index++)
    {
        a[index] = disc_weight;
        disc_weight--;
    }

    cout << "Previous state\n";
    print_tower(a, "Source Tower: ");
    print_tower(b, "Auxiliary Tower: ");
    print_tower(c, "Destination Tower: ");
    tower_of_hanoi(a,b,c,discs);
    cout << "Current state\n";
    print_tower(a, "Source Tower: ");
    print_tower(b, "Auxiliary Tower: ");
    print_tower(c, "Destination Tower: ");
    return 0;
}
int get_last_disk_index(int tower[])
{
    int i;
    for (i = 0; i<=MAX; i++)
    {
        if (tower[i] == 0 && i != 0) return i-1;
        if (tower[i] == 0 && i == 0) return -1; // signifying empty tower 
    }
    return -2; //signifying full tower
}

int get_empty_index(int tower[])
{   int i;
    for(i = 0; i<MAX; i++)
    {
        if(tower[i]==0) return i;
    }
    return -1; //signifying full tower
}

void tower_of_hanoi(int source[], int auxiliary[] ,int destination[], int disc_count)
{

    if (disc_count <= 1){
        int destination_index = get_empty_index(destination);
        int last_disc_index = get_last_disk_index(source);
        if (last_disc_index == -1) 
        {
            cout<< "The tower is empty\n";
            return;
        }
        destination[destination_index] = source[last_disc_index];
        source[last_disc_index] = 0;
        return;
    }
    tower_of_hanoi(source,destination,auxiliary,disc_count-1);
    int destination_index = get_empty_index(destination);
    int last_disc_index = get_last_disk_index(source);
    if (last_disc_index == -1) 
    {
        cout<< "The tower is empty\n";
        return;
    }
    destination[destination_index] = source[last_disc_index];
    source[last_disc_index] = 0;

    tower_of_hanoi(auxiliary,source,destination,disc_count-1);
    
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