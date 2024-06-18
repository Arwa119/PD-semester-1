#include<iostream>
using namespace std;
main(){
	int n;
	int angles;
	cout<<"Enter The Number Of Sides Of The Polygon: ";
	cin>>n;
	angles=(n-2)*180;
	cout<<"The sum of internal angles of a "<<n<<"-sided polygon is: "<<angles<<" degrees";
}
