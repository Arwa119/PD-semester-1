#include<iostream>
using namespace std;
string checkStudentStatus(int examHour,int examMinute,int studentHour,int studentMinute);
main(){
    int examHour,examMinute,studentHour,studentMinute;
    cout<<"Enter Exam Starting Time (hour): ";
    cin>>examHour;
    cout<<"Enter Exam Starting Time (minutes): ";
    cin>>examMinute;
    cout<<"Enter Student hour of arrival: ";
    cin>>studentHour;
    cout<<"Enter Student minutes of arrival: ";
    cin>>studentMinute;
    cout<<checkStudentStatus(examHour,examMinute,studentHour,studentMinute);

}
string checkStudentStatus(int examHour,int examMinute,int studentHour,int studentMinute){
     string n,state,end;int mints;
     int a=(examHour*60)+examMinute;
     int b=(studentHour*60)+studentMinute;
     int d=a-b;
     int afterHours=(-d)/60;
     int afterMinutes=(-d)%60;
     int earlyHours=(d)/60;
     int earlymints=(d)%60;
     int MinTest1=afterMinutes/10;
     int MinTest2=earlymints/10;

     if (d<0)
     {
        n="Late";
     }
     if (d>=0&&d<=30)
    {
        n="On time";
        
    }
    if(d>30){
        n="Early";
        }
    if (n=="Late"&&(d>(-60)&&d<0))
    {
        end="Late\nTest: "+to_string(-d)+"\n"+to_string(-d)+" minutes after the start";
    }
    if (n=="Late"&&d<=(-60))
    {if (MinTest1==0)
    {
        end="Late\nTest: "+to_string(-d)+"\n"+to_string(afterHours)+":0"+to_string(afterMinutes)+" hours after the start";
    }
    else{
        end="Late\nTest: "+to_string(-d)+"\n"+to_string(afterHours)+":"+to_string(afterMinutes)+" hours after the start";
    }}
    if (n=="Early"&& (d<60&&d>0))
    {
        end="Early\nTest: "+to_string(d)+"\n"+to_string(d)+" minutes before the start";}
     
    if (n=="Early"&& d>=60)
    {
        if (MinTest2==0)
        {
         end="Early\nTest: "+to_string(d)+"\n"+to_string(earlyHours)+":0"+to_string(earlymints)+" hours before the start";

        }
        else{
        end="Early\nTest: "+to_string(d)+"\n"+to_string(earlyHours)+":"+to_string(earlymints)+" hours before the start";}
    }if (n=="On time"&&(d>0&&d<=30))
    {
        end="On time\n"+to_string(d)+" minutes before the start";
    }
    if (d==0)
    {
        end="On time";
    }
    
    return end;
    

}

        

    
    
    
    

