#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> mp;
    
    mp[1] = 3;
    mp.emplace(3,5);
    mp.insert({5,9});
    
    for (auto it: mp)
    {
        cout << it.first << " " << it.second << "\n";
    }

    cout << mp[3]<< endl; //key
    
    auto it = mp.find(1);
    cout << it->first << "\n";
    cout << it->second << "\n";
    
    
    map<pair<int,int>, int> pmp;

    pmp[{2,3}] = 19;


    
    return 0;
}