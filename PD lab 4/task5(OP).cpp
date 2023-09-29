#include<iostream>
#include<window.h>
using namespace std;
void gotoxy(int x,int y);
main()
{	int x=7,y=7;
	gotoxy(x,y);
	system("cls");
	cout<<"ARWA";
}
void gotoxy(int x,int y)
{
	COORD coordinates;
	coordinates.X=x;
	coordinates.Y=y;
	SetConsolePosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);		
	
}