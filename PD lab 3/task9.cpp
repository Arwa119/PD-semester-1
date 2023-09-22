#include<iostream>
using namespace std;
main()
{
	int digit;
	cout<<"Enter a 4-digit number: ";
	cin>>digit;
	int a=digit%10;
	digit=digit/10;
	int b=digit%10;
	digit=digit/10;
	int c=digit%10;
	digit=digit/10;
	int sum=a+b+c+digit;
	cout<<"Sum of the individual digits: "<<sum;
}




