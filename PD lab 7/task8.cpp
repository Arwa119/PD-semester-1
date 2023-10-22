#include<iostream>
#include<iomanip>
using namespace std;
void Cargo(int n);
main(){
    int n;
    cout<<"Enter the count of cargo for transportation: ";
    cin>>n;
    Cargo(n);

}
void Cargo(int n){
    int count=1,sumC=0;
    float ton,avg,sumT;
    float TbusTon=0,TtrainT=0,TtruckT=0;
    while (count<=n)
    {
        cout<<"Enter the tonnage of cargo "<<count<<": ";
        cin>>ton;
        if (ton<=3)
        {
            TbusTon= TbusTon+ton;
        }else if (ton>3&&ton<=11)
        {
            TtruckT=TtruckT+ton;
        }
        else{
            TtrainT=TtrainT+ton;
        }
    count++;
    }
        sumC=TbusTon+TtruckT+TtrainT;
        sumT=((TbusTon*200)+(TtruckT*175)+(TtrainT*120));
        avg=sumT/sumC;
        float avgB=(TbusTon/sumC)*100;
        float avgTruck=(TtruckT/sumC)*100;
        float avgTrain=(TtrainT/sumC)*100;
        cout<<fixed<<setprecision(2);
        cout<<avg<<endl;
        cout<<avgB<<"%"<<endl;
        cout<<avgTruck<<"%"<<endl;
        cout<<avgTrain<<"%";
    
}
