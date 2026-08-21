#include<bits/stdc++.h>
using namespace std;

int main()
{
    //individual pair. The pair data type can any pair of datatype inside it 
    pair<int, int> p1 = {1,7};
    cout << p1.first << " " << p1.second << endl;

    pair<int, float> p2 = {1,3.7};
    cout << p2.first << " " << p2.second << endl;

    //nesting pair
    pair<int, pair<int,int>> p3 = {1,{3,2}};
    cout << p3.first << " " << p3.second.second << " " << p3.second.first << endl;
    
    //array of pair
    pair <int, int> arr[] = {{2,3},{5,7},{2,8}};
    cout << arr[2].second << endl;
    cout << arr[0].first << endl;
    return 0;
}