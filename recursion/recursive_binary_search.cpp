#include <iostream>
#include <format>
using namespace std;

int recursive_binary_search(int *arr, int start,int end, int key);
int main(void)
{
    int length;
    cout<<"Enter the length of array:";
    cin>>length;
    int arr[length];
    for (int i = 0; i<length; i++)
    {
        cout<<format("Enter data{}: ",i+1);
        cin>>arr[i]; 
    }
    int key;
    cout<<"Enter the key: ";
    cin>>key;
    cout << recursive_binary_search(arr,0,length-1,key);
    return 0;
}
int recursive_binary_search(int *arr, int start,int end, int key)
{
    if (start>end) return -1;
    else
    {
    int mid = (start+end)/2;

    if (arr[mid] == key) return mid;
    else if (arr[mid] < key) return recursive_binary_search(arr, mid+1, end, key);
    else return recursive_binary_search(arr, start, mid-1, key);
    }
    
}
