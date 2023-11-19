#include<iostream>
using namespace std;
main(){
    int size;
    cout<<"Enter the length of the array: ";
    cin>>size;
    int arr[size];int array[size];
    cout<<"Enter the elements of the array:\n";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
        array[i]=arr[i];
    }
    int count=0; 
    bool check = false; 
    int res=-1;
    for (int  b = 0; b <= size; b++)
    {
       for (int j = 0; j < size; j++)
        { 
            if (b <= array[j])
            {
                count++;
               
            } 
            
        }
        if (count==b)
        {
           check = true; 
            res=count;
        }
        count=0;
    }

    if (check == true)
    {
        cout<<"Special value: "<<res;
    }
    else{
        cout<<"Special value: "<<res;
    }
    
        
}
    
   
