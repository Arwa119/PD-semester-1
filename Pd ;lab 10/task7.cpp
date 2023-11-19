#include<iostream>
using namespace std;
bool result(int arr[], int size);
main(){
    int size;
    cout<<"Enter the length of the array: ";
    cin>>size;
   int arr[size];
   cout<<"Enter the elements of the array:\n";
   for (int i = 0; i < size; i++)
   {
    cin>>arr[i];
    
   }
   bool check1=result(arr, size);
    cout<<"Can be arranged: "<<check1;
    }
bool result(int arr[], int size)
{

   for (int i = 0; i < size; i++)
   {
        for (int j = 0; j < (size-1) ; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
   }
   
    bool check=true;

    for (int i = 0; i < size; i++)
    {  
        if (i == (size-1))
        {
            continue;
         }
    
        if ((arr[i]+1) != arr[i+1] )
        {
            check=false;
        }
    }
    return check;
}