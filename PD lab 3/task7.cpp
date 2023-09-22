#include <iostream>
using namespace std;
int main ()
{
	cout << "Enter the movie name: ";
	string name;
	cin >> name;
	cout << "Enter the adult ticket price: $";
	float aPrice;
	cin >> aPrice;
	cout << "Enter the child ticket price: $";
	float cPrice;
	cin >> cPrice;
	cout << "Enter the number of adult tickets sold: ";
	float atickets;
	cin >> atickets;
	cout << "Enter the number of child tickets sold: ";
	float ctickets;
	cin >> ctickets;
	cout << "Enter the percentage of the amount to be donated to charity: ";
	float perCharity;
	cin >> perCharity;
	cout << endl;
	cout << "Movie: " << name << endl;
	float tAmount;
	tAmount = (aPrice*atickets)+(cPrice*ctickets);
	cout << "Total amount generated from ticket sales: $" << tAmount << endl;
	float charity;
	charity = tAmount*10/100;
	cout << "Donation to charity (10%): $" << charity << endl;
	float final;
	final = tAmount-charity;
	cout << "Remaining amount after donation: $" << final ;
}
	
	