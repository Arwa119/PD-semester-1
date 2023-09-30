#include<iostream>
using namespace std;
void printMenu();
void calculateAggregate(string name,float matricMarks,float interMarks,float ecatMarks);
void compareMarks(string nameStd1,int ecatMarksStd1,string nameStd2,int ecatMarksStd2);
main()
{	system("color 02");
	printMenu();
	string name1,name2;
	float interMarks,matricMarks,ecatMarks;int std1,std2;
	int a;
	cout<<"To calculate aggregate press '1' OR To compare marks press '2': ";
	cin>>a;
	if(a==1)
{
	
	cout<<"Enter your name: "<<name1;
	cin>>name1;
	cout<<"Enter your matric number: ";
	cin>>matricMarks;
	cout<<"Enter your intermediate number: ";
	cin>>interMarks;
	cout<<"Enter ECAT marks: ";
	cin>>ecatMarks;
	calculateAggregate(name1,matricMarks,interMarks,ecatMarks);
}
	if(a==2){
	cout<<"Enter 1st student name: ";
	cin>>name1;
	cout<<"Enter 2nd student name: ";
	cin>>name2;
	cout<<"Enter Ecat marks of 1st student: ";
	cin>>std1;
	cout<<"Enter 2nd student name: ";
	cin>>std2;
	compareMarks(name1,std1,name2,std2);
}
}
void printMenu()
{
	cout<<"    ##    ##  ###  ## ###### ##     ## ##### ######   ###  ###### ###### ##  ##     ####  ######    ####### ###  ##   #######  ###### ###  ## ###### ###### #####  ###### ###  ##   ########       "<<endl;
	cout<<"    ##    ##  ###  ##   ##   ##     ## #     ##   #  ##      ##     ##   ##  ##    ##  ## ##        ##      ###  ##  ##          ##   ###  ## ##     ##     ##  ##   ##   ###  ##  ##              "<<endl;
	cout<<"    ##    ##  ## # ##   ##   ##     ## #     ##  #   ####    ##     ##    ####     ##  ## ######    ##      ## # ##  ##          ##   ## # ## ##     ##     ##  ##   ##   ## # ##  ##              "<<endl;
	cout<<"    ##    ##  ## # ##   ##    ##   ##  ##### ## #       ##   ##     ##     ##      ##  ## ##        ####### ## # ##  ##   ####   ##   ## # ## ###### ###### ## ##    ##   ## # ##  ##    ####      "<<endl;
	cout<<"    ##    ##  ##  ###   ##     ## ##   #     ##  #   #  ##   ##     ##     ##      ##  ## ##        ##      ##  ###  ##   ## #   ##   ##  ### ##     ##     ##  #    ##   ##  ###  ##    ## #      "<<endl;
	cout<<"     ######   ##  ### ######    ###    ##### ##   #   ##   ######   ##     ##       ####  ##        ####### ##  ###   ###### # ###### ##  ### ###### ###### ##   # ###### ##  ###   ####### #      "<<endl;
	cout<<"                                                                                                                                                                                                   "<<endl;
	cout<<"                                                                                                                                                                                                   "<<endl;
	cout<<"         ###   ###  ## #####        ######## ######   ######   ##   ##  ###  ##   ####   ##        ####     ########  ##    ##       ##          ##    ##   ##   ####   #####    #######           "<<endl;
	cout<<"       ##   ## ###  ## ##   ##         ##    ##      ##     #  ##   ##  ###  ## ##    ## ##      ##    ##  ##         ##    ##       ##        ##  ##  ##   ## ##    ## ##   ##  ##                "<<endl;
	cout<<"       ##   ## ## # ## ##    ##        ##    ##      ##        ##   ##  ## # ## ##    ## ##      ##    ##  ##          ##  ##        ##       ##    ## ##   ## ##    ## ##   ##  ##                "<<endl;
	cout<<"       ####### ## # ## ##    ##        ##    ######  ##        #######  ## # ## ##    ## ##      ##    ##  ##    ####    ##          ##       ######## ####### ##    ## ## ##    #######           "<<endl;
	cout<<"       ##   ## ##  ### ##   ##         ##    ##      ##     #  ##   ##  ##  ### ##    ## ##      ##    ##  ##    ## #    ##          ##       ##    ## ##   ## ##    ## ##   ##  ##                "<<endl;
	cout<<"       ##   ## ##  ### #####           ##    ######   ######   ##   ##  ##  ###   ####   #######   ####     ####### #    ##     ##   ######## ##    ## ##   ##   ####   ##    ## #######           "<<endl;
	cout<<"                                                                                                                                                                                                   "<<endl;
	cout<<"                                                                                                                                                                                                   "<<endl;
	cout<<"                                                              ##      ##     ####     ####     ####    ####                                                                                        "<<endl;
	cout<<"                                                              ##      ##   ##    ##   ## ##   ## ##   ##                                                                                           "<<endl;
	cout<<"                                                              ##      ##   ##    ##   ##  ## ##  ##    ####                                                                                        "<<endl;
	cout<<"                                                              ##      ##   ########   ##   ##    ##       ##                                                                                       "<<endl;
	cout<<"                                                              ##      ##   ##    ##   ##         ##   #   ##                                                                                       "<<endl;
	cout<<"                                                                ######   @ ##    ## @ ##         ## @   ##                                                                                         "<<endl;
	cout<<"                                                                                                                                                                                                   "<<endl;
	cout<<"                                                                                                                                                                                                   "<<endl;
	}
void calculateAggregate(string name,float matricMarks,float interMarks,float ecatMarks)
{
	float marks=((matricMarks/1100)*0.3)+((interMarks/550)*0.3)+((ecatMarks/400)*0.4);
	float aggregate=marks*100;
	cout<<"Aggregate is: "<<aggregate<<endl;
}
void compareMarks(string nameStd1,int ecatMarksStd1,string nameStd2,int ecatMarksStd2){
	int roll_1=1,roll_2=2;
	if(ecatMarksStd1>ecatMarksStd2){
	cout<<nameStd1<<" roll no: "<<roll_1<<endl;
	cout<<nameStd2<<" roll no: "<<roll_2<<endl;}
	if(ecatMarksStd1<ecatMarksStd2){
	cout<<nameStd1<<" roll no: "<<roll_2<<endl;
	cout<<nameStd2<<" roll no: "<<roll_1<<endl;}
}

	
