#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void printmaze();
void movePlayer(int x,int y);
main()
{	int x,y;
	system("cls");
	printmaze();
	movePlayer(x,y);
}
void movePlayer(int x,int y)
{	
	x=4,y=1;
while(true){
	if(y==9){
	y=9;x=4;
	while(y!=1){
	gotoxy(x,y);
	cout<<"P";
	Sleep(300);
	gotoxy(x,y);
	cout<<" ";
	y=y-1;}
	}
	gotoxy(x,y);
	cout<<"P";
	Sleep(300);
	gotoxy(x,y);
	cout<<" ";
	y=y+1;
	}
}
void gotoxy(int x,int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
void printmaze()
{
	cout<<" ####################################        "<<endl;
	cout<<" #                                  #        "<<endl;
	cout<<" #                                  #        "<<endl;
	cout<<" #                                  #        "<<endl;
	cout<<" #                                  #        "<<endl;
	cout<<" #                                  #        "<<endl;
	cout<<" #                                  #        "<<endl;
	cout<<" #                                  #        "<<endl;
	cout<<" #                                  #        "<<endl;
	cout<<" #                                  #        "<<endl;
	cout<<" ####################################        "<<endl;
}
