#include<iostream>
using namespace std;
main()
{
	float i;
	float p;
	float c;
	cout<<"Enter Imposter Count: ";
	cin>>i;
	cout<<"Enter Player Count: ";
	cin>>p;
	c=(i/p)*100;
	cout<<"Chance of being an imposter: "<<c<<"%";
}

