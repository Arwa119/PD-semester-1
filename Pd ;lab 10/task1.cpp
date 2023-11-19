#include<iostream>
using namespace std;
main(){
    int n;
    cout<<"Enter the number of Saturdays: ";
    cin>>n;
    int arr[n];
    int count=0;
    for (int  i = 0; i < n; i++)
    {
     cout<<"Enter miles run for Saturday "<<i+1<<": ";
     cin>>arr[i];
        if(arr[i]<arr[i+1]){
            count++;

        }
    }
    cout<<"Total progress days: "<<count-(count/2);
}