#include<iostream>
using namespace std;
main(){
    cout<<"Enter the weights of the 10 packages:\n";
   int arr[10];
   for (int i = 0; i < 10; i++)
   {
    cin>>arr[i];
   }
   for (int i = 0; i < 10; i++)
   {
    for (int j = 0; j < 9; j++)
    {
        if (arr[j]>arr[j+1])
    {
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
    }

    }
   }
   cout<<"Sorted array in ascending order: [";
    for (int i = 0; i < 10; i++)
    {
        
        
        cout<<arr[i];
        if (i!= 9)
        {
            cout<<",";
        }

    }
    cout<<"]";

}