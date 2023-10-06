#include<iostream>
#include<windows.h>
using namespace std;
string projectTimeCalculator(float hours,float days,int workers);
main(){
    float hours,days;
    int workers;
    cout<<"Enter the needed hours: ";
    cin>>hours;
    cout<<"Enter the days that firm has: ";
    cin>>days;
    cout<<"Enter the number of  all workers: ";
    cin>>workers;
    string output=projectTimeCalculator(hours,days,workers);
    cout<<output;
}
string projectTimeCalculator(float hours,float days,int workers){
    string final;
    float totalDays=days-(days*0.1);
    float totalHours=totalDays*10*workers;
    int remainingHours=totalHours-hours;

if (remainingHours>=hours)
{
    final="Yes!"+to_string(remainingHours)+" hours left.";
    return final;
}
if (remainingHours<hours)
{
    remainingHours=-(remainingHours);
    final="Not enough time! "+to_string(remainingHours)+" hours needed.";
    return final;
}

}
