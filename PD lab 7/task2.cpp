#include<iostream>
using namespace std;
main(){
    int n;
    cout<<"Enter desired number of rows: ";
    cin >>n;
    int half=n/2;
    for (int i = 1; i < half ; i++)
    {
        for (int k = half-i; k > 0; k--)
        {
            cout<<" "; 
        }
        
        for (int j = 1; j < i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    
}