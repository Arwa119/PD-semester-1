#include<iostream>
using namespace std;
main(){
    int n;
    cout<<"Enter desired number of rows: ";
    cin >>n;
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j < i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    
}
