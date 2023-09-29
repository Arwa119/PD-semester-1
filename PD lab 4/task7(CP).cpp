#include<iostream>
using namespace std;
void flowerShop(int redRose,int whiteRose,int tulip);
main()
{
	int red,white,tulip;
	cout<<"Red Rose: ";
	cin>>red;
	cout<<"White Rose: ";
	cin>>white;
	cout<<"Tulips: ";
	cin>>tulip;
	flowerShop(red,white,tulip);
	
}
void flowerShop(int redRose,int whiteRose,int tulip)  {
	float dollars=(redRose*2)+(whiteRose*4.10)+(tulip*2.50);
	cout<<"Original Price: $"<<dollars<<endl;
	if(dollars>200)
{
	dollars=dollars-(dollars*0.2);
	cout<<"Price after Discount: $"<<dollars<<endl;
}
	if(dollars<=200){
	cout<<"No discount applied.";
}
}