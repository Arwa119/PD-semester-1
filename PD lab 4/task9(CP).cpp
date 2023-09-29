#include<iostream>
using namespace std;
void tpChecker(int people,int tp);
main()
{
	int people,tp;
	cout<<"Number of people in the household: ";
	cin>>people;
	cout<<"Number of rolls of TP: ";
	cin>>tp;
	tpChecker(people,tp);
}
void tpChecker(int people,int tp) {
	int sheetperDay=people*57;
	int totalSheets=500*tp;
	int days=totalSheets/sheetperDay;
	if(days<14)
{
	cout<<"Your TP will only last "<<days<<" days, buy more!";
}
if(days>14){
	cout<<"Your TP will last "<<days<<" days, no need to panic!";}
}