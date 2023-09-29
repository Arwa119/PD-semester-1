#include<iostream>
using namespace std;
void longestTime(float hours,float minutes);
main()
{
	float hours,minutes;
	cout<<"Enter the number of hours: ";
	cin>>hours;
	cout<<"Enter the number of minutes: ";
	cin>>minutes;
	longestTime(hours,minutes);
	
}
void longestTime(float hours,float minutes) {
	float n=hours*60;
	if(n>minutes)
{
	cout<<hours;}
	if(n<minutes)
{
		cout<<minutes;
}
}