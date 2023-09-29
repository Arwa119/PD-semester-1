#include<iostream>
using namespace std;
void Reverse(string n);
main()
{
	string n;
	cout<<"Enter 'true' or 'false': ";
	cin>>n;
	Reverse(n);
}
void Reverse(string n) {
	if(n=="true"){
	cout<<"false";
}
	if(n=="false"){
	cout<<"true";
}
}