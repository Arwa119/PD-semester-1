#include<iostream>
using namespace std;
main()
{
	string name;
	float target;
	float kilo;
	cout<<"Enter the Name of the Person: ";
	cin>>name;
	cout<<"Enter the target weight loss in kilograms: ";
	cin>>kilo;
	target=15*kilo;
	cout<<name<<" will need "<<target<<" days to lose "<<kilo<<" kg of weight by following the doctor's suggestions";
}

