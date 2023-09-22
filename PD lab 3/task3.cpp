#include<iostream>
using namespace std;
main()
{

	float IV;
	float FV;
	float a;
	float sec;
	cout<<"Enter Initial Velocity (m/s): ";
	cin>>IV;
	cout<<"Enter Acceleration (m/s^2): ";
	cin>>a;
	cout<<"Enter Time (s): ";
	cin>>sec;
	FV=(a*sec)+IV;
	cout<<"Final Velocity (m/s): "<<FV;
} 