#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {1,2,3};
    cout<<"The array elements:";
    for (int i:arr)
    {
        cout<<i<<endl; //endl is like /n
    }
    int j=0;
    while(j<3)
    {
        cout<<arr[j]-1<<endl;
        j++;
    }
    int k=0;
    do{
        cout<<arr[k]+1<<endl;
        k++;
    }while(k<3);

}