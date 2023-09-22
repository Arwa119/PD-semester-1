#include<iostream>
using namespace std;
main()
{
	float minutes;
	int FPS;
	cout<<"Number of Minutes: ";
	cin>>minutes;
	cout<<"Frames per Second: ";
	cin>>FPS;
	float total=minutes*60*FPS;
	cout<<"Total Number of Frames: "<<total;
}