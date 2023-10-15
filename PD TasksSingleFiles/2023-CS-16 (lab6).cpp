//TASK 1
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
//TASK 2
float calculateAverage(float marksEnglish,float marksMath,float marksChemistry,float marksSocialScience,float marksBiology){
float obtainedM=marksEnglish+marksMath+marksChemistry+marksSocialScience+marksBiology;
    float percent=(obtainedM/500)*100;
    return percent;
}
string calculateGrade(float average)
{string grade;
if(average>=90&&average<=100){
grade="A+";
}
if(average>=80&&average<90){
grade="A";
}
if(average>=70&&average<80){
grade="B+";
}
if(average>=60&&average<70){
grade="B";
}
if(average>=50&&average<60){
grade="C";
}
if(average>=40&&average<50){
grade="D";
}
if(average<40){
grade="F";
}
return grade;
}
// TASK 3
string findZodiacSign(int day,string month){
    string sign;
    if ((month=="March"&&day>=21)||(month=="April"&&day<=19))
    {
        sign="Aries";
    }
    if ((month=="April"||month=="May")&&(day==20))
    {
        sign="Taurus";
    }
    if ((month=="May"&&day>=21)||(month=="June"&&day<=20))
    {
        sign="Gemini";
    }
    if ((month=="June"&&day>=21)||(month=="July"&&day<=22))
    {
        sign="Cancer";
    }
    if ((month=="July"&&day>=23)||(month=="August"&&day<=22))
    {
        sign="Leo";
    }
    if ((month=="August"&&day>=23)||(month=="September"&&day<=22))
    {
        sign="Virgo";
    }
    if ((month=="September"&&day>=23)||(month=="October"&&day<=22))
    {
        sign="Libra";
    }
    if ((month=="October"&&day>=22)||(month=="November"&&day<=21))
    {
        sign="Scorpio";
    }
    if ((month=="November"&&day>=22)||(month=="December"&&day<=21))
    {
        sign="Sagittarius";
    }
if ((month=="December"&&day>=22)||(month=="January"&&day<=19))
    {
        sign="Capricon";
    }
    if ((month=="January"&&day>=20)||(month=="February"&&day<=18))
    {
        sign="Aquarius";
    }
    if ((month=="February"&&day>=19)||(month=="March"&&day<=20))
    {
        sign="Pisces";
    }

return sign;

}
//TASK 4
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

//TASK 5
float calculateFruitPrice(string fruit,string dayOfWeek,double quantity)
{double price;
    if (dayOfWeek=="Monday"||dayOfWeek=="Tuesday"||dayOfWeek=="Wednesday"||dayOfWeek=="Thursday"||dayOfWeek=="Friday")
    {
        if (fruit=="banana")
        {
            price=2.50*quantity;
        }
        if (fruit=="apple")
        {
            price=1.20*quantity;
        }
        
        if (fruit=="orange")
        {
            price=0.85*quantity;
        }
        
        if (fruit=="grapefruit")
        {
            price=1.45*quantity;
        }
        
        if (fruit=="kiwi")
        {
            price=2.70*quantity;
        }
        if (fruit=="pineapple")
        {
            price=5.50*quantity;
        }
        if (fruit=="grapes")
        {
            price=3.85*quantity;
        }
        
        
    }
    else{
        if (fruit=="banana")
        {
            price=2.70*quantity;
        }
        if (fruit=="apple")
        {
            price=1.25*quantity;
        }
        
        if (fruit=="orange")
        {
            price=0.90*quantity;
        }
        
        if (fruit=="grapefruit")
        {
            price=1.60*quantity;
        }
        
        if (fruit=="kiwi")
        {
            price=3.00*quantity;
        }
        if (fruit=="pineapple")
        {
            price=5.60*quantity;
        }
        if (fruit=="grapes")
        {
            price=4.20*quantity;}
    }
    return price;
}
//TASK 6
string calculateHotelPrices(string month,int numberOfStay){
    float studio,apartment;
    string output;
    if (month=="May"||month=="October")
    {
        studio=50*numberOfStay;
        if (numberOfStay>7&&numberOfStay<=14)
        {
            studio=studio-(studio*0.05);
        }
        if (numberOfStay>14)
        {
            studio=studio-(studio*0.3);
        }
        
        
        apartment=65*numberOfStay;
    }if (month=="June"||month=="September")
    {
        studio=75.20*numberOfStay;
        if (numberOfStay>14)
        {
            studio=studio-(studio*0.2);
        }
        apartment=68.70*numberOfStay;
    }if (month=="July"||month=="August")
    {
        studio=76*numberOfStay;
        apartment=77*numberOfStay;
    }
    if (numberOfStay>14)
    {
      apartment=apartment-(apartment*0.1);
    }
    
   output="Apartment: "+to_string(apartment)+"$.\n"+"Studio: "+to_string(studio)+"$.";
    return output;
}
// TASK 7
string calculateHotelPrices(string month,int numberOfStay){
    float studio,apartment;
    string output;
    if (month=="May"||month=="October")
    {
        studio=50*numberOfStay;
        if (numberOfStay>7&&numberOfStay<=14)
        {
            studio=studio-(studio*0.05);
        }
        if (numberOfStay>14)
        {
            studio=studio-(studio*0.3);
        }
        
        
        apartment=65*numberOfStay;
    }if (month=="June"||month=="September")
    {
        studio=75.20*numberOfStay;
        if (numberOfStay>14)
        {
            studio=studio-(studio*0.2);
        }
        apartment=68.70*numberOfStay;
    }if (month=="July"||month=="August")
    {
        studio=76*numberOfStay;
        apartment=77*numberOfStay;
    }
    if (numberOfStay>14)
    {
      apartment=apartment-(apartment*0.1);
    }
    
   output="Apartment: "+to_string(apartment)+"$.\n"+"Studio: "+to_string(studio)+"$.";
    return output;
}
// TASK 8
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
// TASK 9
string checkPointPosition(int h,int x,int y){
    int h2=h*2,h3=h*3,h4=h*4;
    string n;
    if ((x>=0&&x<=h3)&&(y==0))
    {
        n="Border";
    }
    else if ((x>=0&&x<=h3)&&y==h)
    {
        n="Border";
    }
    else if ((x==0||x==h||x==h2||x==h3)&&(y>=0&&y<=h))
    {
        n="Border";
    }
    else if ((x==h||x==h2)&&(y>=h&&y<=h4))
    {
        n="Border";
    }
    else if ((x>=h&&x<=h2)&&(y==h||y==h2||y==h3||y==h4))
    {
        n="Border";
    }
    else if ((x>0&&x<h)&&(y>0&&y<h))
    {
       n="Inside"; 
     }
    else if ((x>h&&x<h2)&&(y>0&&y<h))
    {
        n="Inside";
    }
    else if ((x>h2&&h<h3)&&(y>0&&y<h))
    {
        n="Inside";
    }
    else if ((x>h&&x<h2)&&(y>h&&y<h2))
    {
        n="Inside";
    }
    else if ((x>h&&x<h2)&&(y>h2&&y<h3))
    {
        n="Inside";
    }
    else if ((x>h&&x<h2)&&(y>h3&&y<h4))
    {
        n="inside";
    }
    else{
        n="Outside";
    }
    return n; 
    
}