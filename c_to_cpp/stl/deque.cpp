#include<bits/stdc++.h>
using namespace std;

void read(deque<int> dq);
int main()
{
    deque<int> dq;
    dq.push_back(2);
    dq.emplace_back(4);

    read(dq);

    dq.push_front(21);
    dq.emplace_front(89);

    cout << dq.back() << " " << dq.front() << endl; 
    read(dq);

    dq.pop_back();

    read(dq);

    dq.pop_front();

    read(dq);

    cout << dq[0]<< endl;
    return 0;

}
void read(deque<int> dq)
{
    for(auto it = dq.begin(); it != dq.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << "\n";
}