#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> ls;

    ls.push_back(2);
    ls.emplace_back(3);
    
    for (int x:ls)
    {
        cout << x << " ";
    }
    cout << "\n";

    ls.push_front(5);

        for (int x:ls)
    {
        cout << x << " ";
    }
    cout << "\n";

    ls.emplace_front(7);

    for (int x:ls)
    {
        cout << x << " ";
    }
    cout << "\n";
    cout << ls.back() << " " << ls.front() << endl; 
}