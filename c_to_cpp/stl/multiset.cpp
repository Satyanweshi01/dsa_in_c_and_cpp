#include<bits/stdc++.h>
using namespace std;

void read(multiset<int> ms);
int main()
{
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    read(ms);

    cout << ms.count(1) << endl;

    ms.erase(ms.find(1)); //only one 1
    read(ms);
    ms.erase(1); //removes all the occurance of 1
    read(ms);
    return 0;
}
void read(multiset<int> ms)
{
    for(auto it = ms.begin(); it != ms.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << "\n";
}