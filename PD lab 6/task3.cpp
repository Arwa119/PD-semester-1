#include<iostream>
using namespace std;
string findZodiacSign(int day,string month);
main(){
    int day;
    string month;
    cout<<"Enter the day of birth: ";
    cin>>day;
    cout<<"Enter the month of birth (e.g., January, February): ";
    cin>>month;
    cout<<"Zodiac Sign: "<<findZodiacSign(day,month);
}
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
