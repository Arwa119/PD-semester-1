#include<iostream>
using namespace std;
string decideActivity(string temp,string humidity);
main()
{
 string temp,humidity;
 cout<<"Enter temperature (warm or cold): ";
 cin>>temp;
 cout<<"Enter humidity (dry or humid): ";
 cin>>humidity;
 cout<<"Recommended activity: "<<decideActivity(temp,humidity);
}
string decideActivity(string temp,string humidity){
    string a;
    if(temp=="warm")
    {
        if(humidity=="dry"){
            a="Play tennis";
        }
        else{
            a="Swim";
        }
    }else{
        if (humidity=="dry")
        {
            a="Play basketball";
        }
        else{
            a="Watch TV";
        }
        
    }
    return a;
}