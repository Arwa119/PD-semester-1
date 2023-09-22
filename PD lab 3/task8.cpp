#include<iostream>
using namespace std;
main()
{
	float vegPrice;
	float fruitP;
	float kiloveg;
	float kilofruit;
	float earning;
	cout<<"Enter vegetable price per kilogram (in coins): ";
	cin>>vegPrice;
	cout<<"Enter fruit price per kilogram (in coins): ";
	cin>>fruitP;
	cout<<"Enter total kilograms of vegetables: ";
	cin>>kiloveg;
	cout<<"Enter total kilograms of fruits: ";
	cin>>kilofruit;
	float earningCoins=(vegPrice*kiloveg)+(fruitP*kilofruit);
	earning=earningCoins/1.94;
	cout<<"Total earnings in Rupees (Rps): "<<earning;

}




