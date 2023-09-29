#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void name1();
void name2();
void name3();
void name4();

main()
{
	name1();
	name2();
	name3();
	name4();

	
}
void gotoxy(int x,int y)
{
	COORD coordinates;
	coordinates.X=x;
	coordinates.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);		
	
}
void name1()
{
	gotoxy(15,10);
	cout<<"A";
}
void name2()
{
	gotoxy(15,11);
	cout<<"R";
}
void name3()
{
	gotoxy(15,12);
	cout<<"W";
}
void name4()
{
	gotoxy(15,13);
	cout<<"A";
}