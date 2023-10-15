#include<iostream>
using namespace std;
float amount(char service,char time,int mint);
main(){
    char service,time;
    string serviceType;
    int min;
    cout<<"Enter the service code (R/r for regular, P/p for premium): ";
    cin>>service;
    
    if(service=='p'||service=='P'){
        cout<<"Enter time of the call (D/d for day, N/n for night): ";
        cin>>time;
    }else{
        time='a';
    }
     cout<<"Enter the number of minutes used: ";
    cin>>min;
    if(service=='P'||service=='p'){
        serviceType="Premium";
    }
    else{
        serviceType="Regular";
    }
    cout<<"Service Type: "<<serviceType<<endl;
         cout<<"Total Minutes Used: "<<min<<" minutes"<<endl;
         float result=amount(service,time,min);
         cout<<"Amount Due: $"<<result;


}
float amount(char service,char time,int mint){
    float value;
    if (service=='P'||service=='p')    {
        if (time=='N'||time=='n')
        {
            if (mint>100)
            {
                value=((mint-100)*0.05)+25.00;
            }
            else{
                value=25.00;
            }

        }else{
            if (mint>75)
            {
                value=((mint-75)*0.10)+25.00;
            }
            else{
                value=25.00;
            }
        }
        
    }
    else{
        if(mint>50){
            value=((mint-50)*0.20)+10.00;
        }else{
            value=10.00;
        }
    }
    return value;
}

