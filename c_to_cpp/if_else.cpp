#include <iostream>
using namespace std;

int main(){
    int age;
    cin >> age;
    if (age >= 18)
        cout << "Adult\n";
    else
        cout << "Minor\n";
    return 0;
}