#include<iostream>
using namespace std;
void Ticket(string n,float d);
main()
{
	string n;
	float d;
	cout<<"Enter the country's name: ";
	cin>>n;
	cout<<"Enter the ticket price in dollars: $";
	cin>>d;
	Ticket(n,d);
}
void Ticket(string n,float d) {
	float discount=0;
	if(n=="Pakistan"){
	discount=d*0.05;
	}

	if(n=="Ireland"){
	discount=d*0.1;
	}

	if(n=="India"){
	discount=d*0.2;
	}

	if(n=="England"){
	discount=d*0.3;
	}

	if(n=="Canada"){
	discount=d*0.45;
	}
	float price=d-discount;
	cout<<"Final ticket price after discount: $"<<price;
}