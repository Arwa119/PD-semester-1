//task 3
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
//task 4
int triangle(int n){
     int sum=0;
    for (int i = 0; i <= n; i++)
    {
        
        sum=sum+i;
        
    
    }
    
    return sum;
    
}
//task 5
bool isPrime(int number){

    int num = 1;
    int factor = 0;
    int count = 0;

    if (number > 1) {
        while (num <= number) {
            if (number % num == 0) {
               
                count++;
            }
            num++;
        }
    } else  {
        return 0;
    } 

    if (count == 2) {
        return 1;
    } else {
       return 0;
    }

}
//task 6
int primorial(int n){
   
    int number=1;
    int countprime=0,product=1;
    while(countprime!=n){
        int check=isPrime(number);
        if (check==1)
        {
            countprime++;
            product=product*number;
            number=number+1;
            
        }
        else{
            number=number+1;
           
        }
        
    }
    return product;
}
bool isPrime(int number){

    int num = 1;
    int factor = 0;
    int count = 0;

    if (number > 1) {
        while (num <= number) {
            if (number % num == 0) {
               
                count++;
            }
            num++;
        }
    } else  {
        return 0;
    } 
    if (count == 2) {
        return 1;
    } else {
       return 0;
    }

}
//task 7
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
//task 8

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


