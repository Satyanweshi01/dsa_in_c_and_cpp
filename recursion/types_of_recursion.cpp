#include <iostream>
using namespace std;

void tail_recursion(int x);
void head_recursion(int x);
void linear_recursion(int x);
void tree_recursion(int x);

int main(void)
{
    tail_recursion(3);
    cout<<"\n";
    head_recursion(3);
    cout<<"\n";
    linear_recursion(5);
    cout<<"\n";
    tree_recursion(3);
    cout<<"\n";
    return 0;
}
void tail_recursion(int x)
{
    if (x>0){
        cout<<x<<" ";
        tail_recursion(x-1); //recursive case at the end
    }
}
void head_recursion(int x)
{
    if (x>0){
        head_recursion(x-1); //recursive case at the start
        cout<<x<<" ";
    }
}
void linear_recursion(int x)
{
    if (x>0)
    {
        cout<<"/"<<x;
        linear_recursion(x-1);
        cout<<"/";
    }
}
void tree_recursion(int x)
{
    if (x>0)
    {
        cout<<x<<" ";
        tree_recursion(x-1);
        tree_recursion(x-1);
    }
}