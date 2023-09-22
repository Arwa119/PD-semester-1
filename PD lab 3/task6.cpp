#include<iostream>
using namespace std;
main()
{
	float size;
	float cost;
	float area;
	cout<<"Enter the size of the fertilizer bag in pounds: ";
	cin>>size;
	cout<<"Enter the cost of the bag: $";
	cin>>cost;
	cout<<"Enter the area in square feet that can be covered by the bag: ";
	cin>>area;
	float costPerP=cost/size;
	float PoundPerF=size/area;
	float finalcost=PoundPerF*costPerP;
	cout<<"Cost of fertilizer per pound: $"<<costPerP<<endl;
	cout<<"Cost of fertilizing per square foot: $"<<finalcost;
	
	
}

