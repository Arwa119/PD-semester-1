#include<iostream>
using namespace std;
bool isRepeatingCycle(int cycle,int array[],int len);


main(){
    int len;
    cout<<"Enter the length of the array: ";
    cin>>len;

    int arr[len];
    cout<<"Enter the elements of the array:\n";
    for (int i = 0; i < len; i++)
    {
        cin>>arr[i];
    }
    int cycle;
    cout<<"Enter the length of the cycle: ";
    cin>>cycle;
    bool check = isRepeatingCycle(cycle,arr,len);
    cout<<"Output: "<<check;
}
bool isRepeatingCycle(int cycle,int array[],int len){
    if (cycle>len)
    {
        return true;
    }
    
    for (int  i = 0; i < len ; i++)
    {  
    
         int a=cycle;
        bool check=false;
        while(cycle!=0){
        
        if (array[i]==array[a])
        {
           check=true;
        }
        cycle--;
    }
  return check;
    }
    
}