#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq;

    pq.push(3); // {3}
    pq.push(2); // {3,2}
    pq.push(9); // {9,3,2}

    cout << pq.top() << "\n";

    pq.pop(); // {3,2}

    cout << pq.top() << "\n";

    priority_queue<int, vector<int>, greater<int>> min_heap_pq;
    min_heap_pq.push(3); // {3}
    min_heap_pq.push(8); // {3,8}
    min_heap_pq.push(2); // {2,3,8}
    
    cout << min_heap_pq.top();

    return 0;
}