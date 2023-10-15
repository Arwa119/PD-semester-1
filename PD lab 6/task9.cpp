#include<iostream>
using namespace std;
string checkPointPosition(int h,int x,int y);
main(){
    int h,x,y;
    cout<<"Enter height: ";
    cin>>h;
    cout<<"Enter x coordinate: ";
    cin>>x;
    cout<<"Enter y coordinate: ";
    cin>>y;
    cout<<checkPointPosition(h,x,y);

}
string checkPointPosition(int h,int x,int y){
    int h2=h*2,h3=h*3,h4=h*4;
    string n;
    if ((x>=0&&x<=h3)&&(y==0))
    {
        n="Border";
    }
    else if ((x>=0&&x<=h3)&&y==h)
    {
        n="Border";
    }
    else if ((x==0||x==h||x==h2||x==h3)&&(y>=0&&y<=h))
    {
        n="Border";
    }
    else if ((x==h||x==h2)&&(y>=h&&y<=h4))
    {
        n="Border";
    }
    else if ((x>=h&&x<=h2)&&(y==h||y==h2||y==h3||y==h4))
    {
        n="Border";
    }
    else if ((x>0&&x<h)&&(y>0&&y<h))
    {
       n="Inside"; 
     }
    else if ((x>h&&x<h2)&&(y>0&&y<h))
    {
        n="Inside";
    }
    else if ((x>h2&&h<h3)&&(y>0&&y<h))
    {
        n="Inside";
    }
    else if ((x>h&&x<h2)&&(y>h&&y<h2))
    {
        n="Inside";
    }
    else if ((x>h&&x<h2)&&(y>h2&&y<h3))
    {
        n="Inside";
    }
    else if ((x>h&&x<h2)&&(y>h3&&y<h4))
    {
        n="inside";
    }
    else{
        n="Outside";
    }
    return n; 
    
}
