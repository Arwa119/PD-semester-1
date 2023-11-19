#include<iostream>
using namespace std;
main(){
    int n;
    cout<<"Enter the number of boxes: ";
    cin>>n;
    int size=3*n;
    int array[size];
    cout<<"Enter the dimensions of the boxes (length, width, height):\n";
    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
    }
    int product=1;
    int sum=0;
    
   for (int i = 0; i < size; i++)
   {
    product*=array[i];
     
    if((i+1)%3 == 0){
        sum=sum+product;
        product=1;
        
    }
   
   }
   cout<<"Total volume of all boxes: "<<sum;

    
    
    
}