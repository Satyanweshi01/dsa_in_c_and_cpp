#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1,2,3};
    cout<<"The array elements:"<<"\n";
    for(int i =0; i<3; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for (int i:arr) //for each
    {
        cout<<i<<" "; //endl is like /n
    }
    cout<<endl;
    int j=0;
    while(j<3)
    {
        cout<<arr[j]<<" ";
        j++;
    }
    cout<<endl;
    int k=0;
    do{
        cout<<arr[k]<<" ";
        k++;
    }while(k<3);
    cout<<endl;

}