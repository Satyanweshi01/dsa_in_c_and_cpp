#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> p1, pair<int,int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    
    // if they are equal
    if(p1.first > p2.first) return true;
    
    //if(p1.first < p2.second) return false;
    return false;
}
int main()
{
    pair<int, int> a[] = {{3,5},{2,5},{1,3}};
    
    for(auto x: a)
    {
        cout << x.first << " "<< x.second << "  ";
    }
    cout << "\n";
    auto it = begin(a);
    auto it1 = end(a);
    sort(it,it1,comp);

    for(auto x: a)
    {
        cout << x.first << " "<< x.second << "  ";
    }
    return 0;
}