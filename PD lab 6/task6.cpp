#include<iostream>
using namespace std;
string calculateHotelPrices(string month,int numberOfStay);
main(){
    string month;
    int numberOfStays;
    cout<<"Enter the month (May, June, July, August, September, October): ";
    cin>>month;
    cout<<"Enter the number of stays: ";
    cin>>numberOfStays;
    cout<<calculateHotelPrices(month,numberOfStays);
}
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
