#include<iostream>
using namespace std;
main(){
    int n;
    cout<<"Enter how many words you want to enter: ";
    cin>>n;
    string arr[n];
    for (int  i = 0; i < n; i++)
    {
        cout<<"Enter word "<<i+1<<": ";
        cin>>arr[i];

    }
    char a;
    cout<<"Enter the letter you want to count: ";
    cin>>a;
    int count=0;
    for (int i = 0; i < n; i++)
    {   string word=arr[i];
        int j=0;
        while (word[j]!='\0')
        {
            if (word[j]==a)
            {
                count++;
            }
            j++;
        }
        
        }
        cout<<a<<" shows up "<<count<<" times in the data.";
    }
    

