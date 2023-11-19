#include<iostream>
using namespace std;
main(){
    int size;
    cout<<"Enter the length of the array: ";
    cin>>size;
    string arr[size];
    cout<<"Enter the elements of the array (\"left\" or \"right\"):\n";
    int count1=0;int count2=0;int result=0;
    for (int i = 0; i < size ; i++)
    {
        cin>>arr[i];
        if (arr[i]=="right")
        {
            count1++;
        }
        else{
            count2++;
        }
        
    }
    count1=count1*90;
    count2=count2*90;
    if (count1>count2)
    {
         result=count1-count2;
    }
    else{
        result=count2-count1;
    }
    
    result=result/360;
    cout<<"Number of full rotations: "<<result;


}