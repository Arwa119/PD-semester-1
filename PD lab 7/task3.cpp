#include<iostream>
using namespace std;
void amplify(int num);
main(){
    int num;
    cout<<"Enter the number to Amplify: ";
    cin>>num;
    amplify(num);

}
void amplify(int num){
    int n=1;int a;
    while (n<=num)
    {
        if (n%4==0)
    {
        a=n*10;
        cout<<a;
        if (n!=num)
        {
            cout<<", ";
        }
        n++;
        continue;
    }
        if (n<=num)
    {
        cout<<n;
    }
    if (n<num)
    {
        cout<<", ";
    }
    
        
        n++;
    }
    
}
