//task1
int value1=10;
int value2=20;
int sum()
{
	 value1=40;
	return value1+value2;
}
main()
{
	int x = value1;
	value1=100;
	x=20;
	value2 = sum();
	cout<<value1<<" "<<value2;
}
//task2
float pyramidVolume(float lenght,float width,float height,string unit){
    float v=((lenght*width*height)/3);;
    if(unit=="meters"){
         
         return v;
    }
    else if(unit=="millimeters"){
       v=(v*(1000000000));
         return v;
    }
    else if(unit=="centimeters"){
        v=(v*(1000000));
         return v;
    }
    else{
         v=(v/1000000000);
        return v;
    }
    //task3
    float taxCalculator(char type,float price)
{
    float taxAmount=0;float totalP=0;
    if (type=='M')
    {
      taxAmount=price*(0.06);
      totalP=taxAmount+price;
      return totalP;
    }
    if (type=='E')
    {
      taxAmount=(price*(0.08));
      totalP=taxAmount+price;
      return totalP;
    }
    if (type=='S')
    {
      taxAmount=(price*(0.1));
      totalP=taxAmount+price;
      return totalP;
    }
    if (type=='V')
    {
      taxAmount=(price*(0.12));
      totalP=taxAmount+price;
      return totalP;
    }
    if (type=='T')
    {
      taxAmount=(price*(0.15));
      totalP=taxAmount+price;
      return totalP;
    }    
}
//task4
string projectTimeCalculator(float hours,float days,int workers);
main(){
    float hours,days;
    int workers;
    cout<<"Enter the needed hours: ";
    cin>>hours;
    cout<<"Enter the days that firm has: ";
    cin>>days;
    cout<<"Enter the number of  all workers: ";
    cin>>workers;
    string output=projectTimeCalculator(hours,days,workers);
    cout<<output;
}
string projectTimeCalculator(float hours,float days,int workers){
    string final;
    float totalDays=days-(days*0.1);
    float totalHours=totalDays*10*workers;
    int remainingHours=totalHours-hours;

if (remainingHours>=hours)
{
    final="Yes!"+to_string(remainingHours)+" hours left.";
    return final;
}
if (remainingHours<hours)
{
    remainingHours=-(remainingHours);
    final="Not enough time! "+to_string(remainingHours)+" hours needed.";
    return final;
}

}
//TASK Game
int x1=4,y1=2,x2=84,y2=2,x3=4,y3=16,p=4,q=6;
void gotoxy(int x,int y);
void eraseEnemy1();
void eraseEnemy2();
void eraseEnemy3();
void erasePlayer();
void printMaze();
void printPlayer();
void printEnemy1();
void printEnemy2();
void printEnemy3();
void moveEnemy1();
void moveEnemy2();
void moveEnemy3();
void movePLeft();
void movePRight();
void movePUp();
void movePDown();
char getCharAtxy(short int x,short int y);
main()
{
 system("cls");
 system("color 02");
 printMaze();
 printEnemy1();
 printEnemy2();
 printEnemy3();
 printPlayer();
 while (true)
 {  if (GetAsyncKeyState(VK_LEFT))
 {
    movePLeft();
 }if (GetAsyncKeyState(VK_RIGHT))
 {
    movePRight();
 }if (GetAsyncKeyState(VK_UP))
 {
    movePUp();
 }
 if (GetAsyncKeyState(VK_DOWN))
 {
    movePDown();
 }
    moveEnemy1();
    moveEnemy3();
    moveEnemy2();
    Sleep(150);
 }
}
char getCharAtxy(short int x,short int y){
    CHAR_INFO ci;
    COORD xy={0,0};
    SMALL_RECT rect={x,y,x,y};
    COORD coordBufSize;
    coordBufSize.X=1;
    coordBufSize.Y=1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
    : ' ';
}
void movePLeft(){
    if(getCharAtxy(p-1,q)==' ')
    {
        erasePlayer();
        p=p-1;
        printPlayer();
    }
}
void movePRight(){
    if (getCharAtxy(p+5,q)==' ')
    {
        erasePlayer();
        p=p+1;
        printPlayer();
    }
    
}
void movePUp(){
    if (getCharAtxy(p,q-1)==' ')
    {
        erasePlayer();
        q=q-1;
        printPlayer();
    }
    
}
void movePDown(){
    if (getCharAtxy(p,q+3)==' ')
    {
        erasePlayer();
        q=q+1;
        printPlayer();
    }
    
}
void  moveEnemy1(){
    eraseEnemy1();
    x1=x1+1;
    if (x1==74)
    {
        x1=4;
    }
    printEnemy1();
}
void moveEnemy2(){
    eraseEnemy2();
    x2=x2-1;y2=y2+1;
    if (x2==33||y2==14)
    {
       
     x2=84;y2=2;
        
    }
 printEnemy2();  
}
void moveEnemy3(){
    eraseEnemy3();
    y3=y3+1; 
    if (y3==21)
    {
        y3=16;
    }   
    printEnemy3();   
}
void eraseEnemy1(){
gotoxy(x1,y1);
    cout<<"            ";
    gotoxy(x1,y1+1);
    cout<<"            ";
    gotoxy(x1,y1+2);
    cout<<"            ";
}
void eraseEnemy3(){
     gotoxy(x3,y3);
    cout<<"           ";
    gotoxy(x3,y3+1);
    cout<<"           ";
    gotoxy(x3,y3+2);
    cout<<"           ";
}
void eraseEnemy2(){
    gotoxy(x2,y2);
    cout<<"           ";
    gotoxy(x2,y2+1);
    cout<<"           ";
    gotoxy(x2,y2+2);
    cout<<"           ";
}
void gotoxy(int x,int y){
    COORD coordinates;
    coordinates.X=x;
    coordinates.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);		
}
void printPlayer()
{
    gotoxy(p,q);
    cout<<" ^^^ "<<endl;
    gotoxy(p,q+1);
    cout<<"|O O|"<<endl;
    gotoxy(p,q+2);
    cout<<"^^^^^"<<endl;     

}
void erasePlayer(){
    gotoxy(p,q);
    cout<<"     "<<endl;
    gotoxy(p,q+1);
    cout<<"     "<<endl;
    gotoxy(p,q+2);
    cout<<"     "<<endl;  
}
void printEnemy2(){
    gotoxy(x2,y2);
    cout<<"     ++++++";
    gotoxy(x2,y2+1);
    cout<<"  0=== oo +";
    gotoxy(x2,y2+2);
    cout<<"     ++++++";

}
void printEnemy1(){
    gotoxy(x1,y1);
    cout<<"   [ ]      ";
    gotoxy(x1,y1+1);
    cout<<" [][X][]    ";
    gotoxy(x1,y1+2);
    cout<<"   [ ]      ";

}
void printEnemy3(){
    gotoxy(x3,y3);
    cout<<"++++++   ";
     gotoxy(x3,y3+1);
    cout<<"* oo ===0";
     gotoxy(x3,y3+2);
    cout<<"++++++   ";
}

void printMaze(){
    cout<<"  ________________________________________________________________________________________________   "<<endl;
    cout<<"  ||============================================================================================||   "<<endl;
    cout<<"  ||                                                                                            ||   "<<endl;
    cout<<"  ||                                                                                            ||   "<<endl;
    cout<<"  ||                                                                                            ||   "<<endl;
    cout<<"  ||                                                                                            ||   "<<endl;
    cout<<"  ||                                                                                            ||   "<<endl;
    cout<<"  ||                                                                                            ||   "<<endl;
    cout<<"  ||                                                                                            ||   "<<endl;
    cout<<"  ||XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX|                                                           ||   "<<endl;
    cout<<"  ||                                                                                            ||   "<<endl;
    cout<<"  ||                                          |%%%%%%%%%%%%%%%%%%%%%%|                  |XXXXXXX||   "<<endl;
    cout<<"  ||                                                                                    ||SHIELD||   "<<endl;
    cout<<"  ||                                                                                  /%%%%%%%%%||   "<<endl;
    cout<<"  ||                                                                                 ||         ||   "<<endl;
    cout<<"  ||%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%|                                              ||         ||   "<<endl;
    cout<<"  ||                                                                                 ||         ||   "<<endl;
    cout<<"  ||                                                                                            ||   "<<endl;
    cout<<"  ||                                          |@@@@@@@@@@@@|                                    ||   "<<endl;
    cout<<"  ||                                                                                            ||   "<<endl;
    cout<<"  ||                                                               [XXXXXXXXXXXXXXXXXXXXXXXXXXX]||   "<<endl;
    cout<<"  ||                                                                                            ||   "<<endl;
    cout<<"  ||                                                                                            ||   "<<endl;
    cout<<"  ||%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%|                                      ||   "<<endl;
    cout<<"  ||     ____                                                                                   ||   "<<endl;
    cout<<"  ||    |____|                                                                                  ||   "<<endl;
    cout<<"  ||    |                                                                                       ||   "<<endl;
    cout<<"  ||============================================================================================||   "<<endl;
     cout<<"                                                                                                     "<<endl;
    cout<<"      @@@@@@ @@  @@ @@@@@@        @@@@@@    @@@    @@@@@    @@@   @@@@@@  @@@@@@     /\\/\\/\\       "<<endl;
    cout<<"        @@   @@  @@ @@            @@      @@   @@ @@    @  @   @  @@   @@ @@       | ()  () |        "<<endl;
    cout<<"        @@   @@@@@@ @@@@@@  ===   @@@@@@    @@    @@       @@@@@  @@ @@@  @@@@@@   |  ____  |        "<<endl;
    cout<<"        @@   @@  @@ @@            @@      @   @@  @@    @  @   @  @@      @@       /\\/\\/\\/\\/\\   "<<endl;
    cout<<"        @@   @@  @@ @@@@@@        @@@@@@   @@@     @@@@@   @   @  @@      @@@@@@                     "<<endl;

}
//TASK BA
  #include<iostream>
using namespace std;
    int num,no1,no2,no3;
    string route1,route2,route3,timing1,timing2,timing3;
    float price1,price2,price3,tax1,tax2,tax3;
    float finalPrice1,finalPrice2,finalPrice3;
void header();
void inputs();
void admin();
main()
{   system("color 02");
    int access;
    header();
    while(true){
    cout<<"\n";
    cout<<"     M A I N  P A G E         "<<endl;    
    cout<<"To access as a admin press 1: "<<endl;
    cout<<"To access as a costumer press 2: "<<endl;
    cout<<"To exit press 0: "<<endl;
    cin>>access;
    system("cls");
    if (access==0)
    {
        cout<<"\n\nTHANK YOU FOR VISITING!!!!"<<endl;
        break;
    }
    if (access==1)
    { system("color 02");
        admin();
    }
    if(access==2){
        system("color 04");
        cout<<"This service is not currently available."<<endl;
    }
    }

}
void header(){
    cout<<"**************************************************************************************************************************"<<endl;
    cout<<"**         @@@  @@@@         @@@@@@  @@@  @@@@@@  @@@  @@  @@    @@@  @@@@@@ @@@@  @@@@    @@@@@@ @@@@  @ @@@@@@        **"<<endl;
    cout<<"**        @   @  @@          @@     @   @   @@   @   @ @@  @@   @   @   @@   @@  @  @@       @@   @@ @@ @ @@            **"<<endl;
    cout<<"**        @@@@@  @@     @@@  @@@@@@ @@@@@   @@   @@@@@ @@@@@@   @@@@@   @@   @@ @   @@       @@   @@ @@ @ @@@@@@        **"<<endl;
    cout<<"**        @   @  @@   @      @@     @   @   @@   @   @ @@  @@   @   @   @@   @@  @  @@   @   @@   @@ @@@@ @@            **"<<endl;
    cout<<"**        @   @ @@@@@@@      @@     @   @   @@   @   @ @@  @@   @   @ @@@@@@ @@   @ @@@@@@ @@@@@@ @@ @@@@ @@@@@@        **"<<endl;
    cout<<"**************************************************************************************************************************"<<endl;
    cout<<"**                                AIRPORT TICKET MANAGEMENT SYSTEM                                                      **"<<endl;
    cout<<"**************************************************************************************************************************"<<endl;
}
void admin(){
    while(true){
    cout<<"\nA D M I N    P A G E  "<<endl;
    cout<<"To add routes press 1: "<<endl;
    cout<<"To view tickets inforamtion press 2: "<<endl;
    cout<<"To exit press 0: \t\t"<<endl;
     cin>>num;
    system("cls");
    if(num==0){
        break;
    }
    if (num==2)
    {
        inputs();
    }
    if (num==1)
    {
        cout<<"\n\nEnter 1st route(Country_To_Country)(8): ";
        cin>>route1;
        cout<<"Enter the price of Ticket: Rs.";
        cin>>price1;
        cout<<"Enter the tax on Ticket(%): ";
        cin>>tax1;
        cout<<"Enter the time of Flight: ";
        cin>>timing1;
        cout<<"Enter the number of Tickets: ";
        cin>>no1;
        cout<<"Enter 2nd route: ";
        cin>>route2;
        cout<<"Enter the price of Ticket: Rs.";
        cin>>price2;
        cout<<"Enter the tax on Ticket(%): ";
        cin>>tax2;
        cout<<"Enter the time of Flight: ";
        cin>>timing2;
        cout<<"Enter the number of Tickets: ";
        cin>>no2;
        cout<<"Enter 3rd route: ";
        cin>>route3;
        cout<<"Enter the price of Ticket: Rs.";
        cin>>price3;
        cout<<"Enter the tax on Ticket(%): ";
        cin>>tax3;
        cout<<"Enter the time of Flight: ";
        cin>>timing3;
        cout<<"Enter the number of Tickets: ";
        cin>>no3;
        finalPrice1=price1-(price1*(tax1/100));
        finalPrice2=price2-(price2*(tax2/100));
        finalPrice3=price3-(price3*(tax3/100));
       inputs();}
}}
void inputs(){
    cout<<"========================================================================================================================"<<endl;
    cout<<"Ticket NO.\tRoute\t\t\tPrice\t\tTiming\t\tNo.of tickets.\n";
    cout<<"1         \t"<<route1<<"\t\t"<<finalPrice1<<"\t\t"<<timing1<<"\t\t"<<no1<<endl;
    cout<<"2         \t"<<route2<<"\t\t"<<finalPrice2<<"\t\t"<<timing2<<"\t\t"<<no2<<endl;
    cout<<"3         \t"<<route3<<"\t\t"<<finalPrice3<<"\t\t"<<timing3<<"\t\t"<<no3<<endl;
    cout<<"========================================================================================================================"<<endl;

}
