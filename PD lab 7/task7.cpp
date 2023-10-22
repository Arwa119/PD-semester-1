#include<iostream>
using namespace std;
void Patients(int n);//n = input
main(){
    int n;
    cout<<"Enter Number of days you visited Hospital: ";
    cin>>n;
    Patients(n);
}
void Patients(int n){
    int outcount=1;int p;
    int treatedP=0,untreatedP=0;
    int totalT=0,totalUnT=0;
    int doctor=7;
    while (outcount<=n)
    {
        cout<<"Number of patients who visited hospital on Day "<<outcount<<": ";
        cin>>p;
        if (outcount%3==0)
        {
            if (untreatedP>treatedP)
            {
                doctor=doctor+1;
            }
            
        }
        
        untreatedP=p-doctor;if (p<doctor)
        {
         untreatedP=0;
        }
        
        
        treatedP=p-untreatedP;
        totalT=totalT+treatedP;
        totalUnT=totalUnT+untreatedP;
        outcount++;
    }
    cout<<"Treated Patients: "<<totalT<<endl;
    cout<<"Untreated Patients: "<<totalUnT;
    
}
