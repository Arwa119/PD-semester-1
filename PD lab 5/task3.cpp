#include<iostream>
using namespace std;
float taxCalculator(char type,float price);
main()
{
    char type;
    float price;
    cout<<"Enter the vehicle type code (M, E, S, V, T): ";
    cin>>type;
    cout<<"Enter the price of the vehicle: $";
    cin>>price;
    float finalP=taxCalculator(type,price);
    if (type=='M')
    {
        cout<<"The final price of a vehicle of type "<<type<<" after adding the tax is $"<<finalP;
    }
    if (type=='E')
    {
        cout<<"The final price of a vehicle of type "<<type<<" after adding the tax is $"<<finalP;
    }
    if (type=='S')
    {
        cout<<"The final price of a vehicle of type "<<type<<" after adding the tax is $"<<finalP;
    }
    if (type=='V')
    {
        cout<<"The final price of a vehicle of type "<<type<<" after adding the tax is $"<<finalP;
    }
    if (type=='T')
    {
        cout<<"The final price of a vehicle of type "<<type<<" after adding the tax is $"<<finalP;
    }
    
}
float taxCalculator(char type,float price)
{
    float taxAmount=0;float totalP=0;
    if (type=='M')
    {
      taxAmount=price*(0.06);
      totalP=taxAmount+price;
      return totalP;
    }
    if (type=='E')
    {
      taxAmount=(price*(0.08));
      totalP=taxAmount+price;
      return totalP;
    }
    if (type=='S')
    {
      taxAmount=(price*(0.1));
      totalP=taxAmount+price;
      return totalP;
    }
    if (type=='V')
    {
      taxAmount=(price*(0.12));
      totalP=taxAmount+price;
      return totalP;
    }
    if (type=='T')
    {
      taxAmount=(price*(0.15));
      totalP=taxAmount+price;
      return totalP;
    }    
}