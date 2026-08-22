#include<bits/stdc++.h>
using namespace std;

int main()
{
    //vectors are dynamic
    vector<int> v; // vector declaration it can be any datatype

    v.push_back(3); // add element in the vector container
    v.emplace_back(6);
    v.push_back(10);
    v.push_back(15);
    v.push_back(21);

    cout << v.back() << " " << v.front() << endl; 
    vector<int>::iterator it = v.begin();
    cout << "memory address - " << &(*it) << endl;
    cout << "actual value - "<< *(it) << endl; 

    cout << "last element - "<< v.back() <<endl;

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << "\n";
    v.pop_back();
    // for (vector<int>::iterator it = v.begin(); *(it) != v.back(); it++)
    // {
    //     cout << *(it)<< " ";
    // }
    // cout << "\n";
    
    //deletion in vector
    //v.erase(v.begin()+1);
    //v.erase(v.begin()+1,v.begin()+3);

    for (auto it = v.begin(); it != v.end(); it++)
    {
	    cout << *(it) << " ";
    }
    cout << "\n";
    v.insert(v.begin(),300); //(address, element)

    for (int a:v) 
    {
	cout << a << " ";
    }
    cout << "\n";
    v.insert(v.begin()+2, 2, 10); //(address, times, element)
    for (auto a:v) 
    {
	cout << a << " ";
    }
    cout << "\n";
    v.clear();

    cout << v.empty();

    cout << "\n";
    // pair vector
    vector<pair<int,int>> vec_pair;

    vec_pair.push_back({1,3}); // add a object
    vec_pair.emplace_back(2,5); // construct an object in place

    // vector initialisation 
    vector<int> v1(5,12); // {12,12,12,12,12} (size, element to fill)

    //cout <<v1[0]<< endl <<v1[3]<<endl;
    vector<int> v2(5); // {,,,,}

    //vector copying
    vector<int> v3(5,19);
    vector<int> v3_copy(v3);



    return 0;
}