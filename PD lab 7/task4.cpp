#include<iostream>
using namespace std;
int triangle(int n);
main(){
    int n;
    cout<<"Enter number of Triangle: ";
    cin>>n;
    cout<<"Dots in the Triangle: "<<triangle(n);

}
int triangle(int n){
     int sum=0;
    for (int i = 0; i <= n; i++)
    {
        
        sum=sum+i;
        
    
    }
    
    return sum;
    
}
