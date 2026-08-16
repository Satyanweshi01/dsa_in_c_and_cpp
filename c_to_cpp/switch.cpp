#include <iostream>
using namespace std;

int main()
{
    int choice;
    cin >> choice;
    switch(choice){
        case 1: cout<<"one"; break;
        case 2: cout<<"two"; break;
        case 3: cout<<"three"; break;
        case 4: cout<<"four"; break;
        case 5: cout<<"five"; break;
        default:
            cout<<"out of range";
    }
    return 0;
}