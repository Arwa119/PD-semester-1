#include<iostream>
#include<windows.h>
using namespace std;
float pyramidVolume(float lenght,float width,float height,string unit);
main()
{
	float height,lenght,width;
    string unit;
	cout<<"Enter the lenght of the pyramid (in meters): ";
	cin>>lenght;
	cout<<"Enter the width of the pyramid (in meters): ";
	cin>>width;
	cout<<"Enter the height of the pyramid (in meters): ";
	cin>>height;
	cout<<"Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
    cin>>unit;
    float volume= pyramidVolume(lenght,width,height,unit);
    if (unit=="meters")
    {
        cout<<"The volume of pyramid is: "<<volume<<" cubic meters";
    }
     else if (unit=="millimeters")
    {
        cout<<"The volume of pyramid is: "<<volume<<" cubic millimeters";
    } else if (unit=="centimeters")
    {
        cout<<"The volume of pyramid is: "<<volume<<" cubic centimeters";
    } else 
    {
        cout<<"The volume of pyramid is: "<<volume<<" cubic kilometers";
    }
}
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
    
    

}