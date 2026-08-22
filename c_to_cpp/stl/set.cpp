#include<bits/stdc++.h>
using namespace std;
void read(set<int> s);
int main()
{
    set<int> st;
    st.insert(1); //{1}
    st.emplace(3); //{1,3}
    st.insert(3); //{1,3}
    st.insert(4); //{1,3,4}
    st.insert(5); //{1,3,4,5}


    auto it = st.find(3); // returns the memory address of element 3
    auto it1 = st.begin();
    auto it2 = st.end(); 
    auto it_out = st.find(8); // returns same result as end()
    it2--;

    cout << *(it)<< "\n";
    cout << *(it1)<< "\n";
    cout << *(it2) << "\n";

    read(st);

    st.erase(3); //erases 3, takes logarithmic time
    auto it3 = st.find(5);
    st.erase(it3); //erases 5, takes constant time
    read(st);

    int count = st.count(1);// returns the total occurance of a particular element 
                            // in case of set it is either 1 or 0 
    return 0;
}
void read(set<int> s)
{
    for(auto it = s.begin(); it != s.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << "\n";
}