#include<iostream>
#include<vector>
using namespace std;
string reverse(string arr);
main(){
    string arr;
    cout<<"Enter a string: ";
    getline(cin,arr);
    cout<<"Reversed string: "<<reverse(arr);
}
string reverse(string arr){
    string singleWord = "",word[20],finalString = "";
    int i = 0;
    int wordIdx = 0;
    int sWord = 0;
    while (i < arr.length())
    {
        if (arr[i] != ' ')
        {
            singleWord = singleWord + arr[i]; 
        }
        else{
            word[wordIdx] = singleWord;
            wordIdx++;
            singleWord =  "";
        }
        i++;
    }
    word[wordIdx] = singleWord;
    for (int  i = wordIdx; i>=0 ; i--)
    {
        finalString += word[i] + " ";

    }
    return finalString;
}