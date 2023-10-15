#include<iostream>
using namespace std;
 int calculateVolleyballGames(string yearType,int holidays,int hometownWeekends);
main(){
string year;
int p;
int h;
cout<<"Enter year type: ";
cin>>year;
cout<<"Enter number of holidays: ";
cin>>p;
cout<<"Enter number of weekends: ";
cin>>h;
cout<<calculateVolleyballGames(year,p,h);

}
 int calculateVolleyballGames(string yearType,int holidays,int hometownWeekends){
    float Hplay=(holidays*0.666);
    int Tweekends=(48-hometownWeekends);
    float weekendPlay=(Tweekends*0.75);
    int total=(Hplay+weekendPlay+hometownWeekends);
    if (yearType=="leap")
    {
       if (holidays==0)
       {
         total=total+(total*0.15);
       }
       else{
        total=total+(total*0.15)+1;
       }
        
    }
    return total;
 }
