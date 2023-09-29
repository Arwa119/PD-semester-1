#include<iostream>
using namespace std;
void IsEqual(float x,float y);
main()
{
	int x,y;
	cout<<"Enter the first number: ";
	cin>>x;
	cout<<"Enter the second number: ";
	cin>>y;
	IsEqual(x,y);
}
void IsEqual(float x,float y) {
	if(x==y){
	cout<<"true";
}
	if(x!=y){
	cout<<"false";
}
}