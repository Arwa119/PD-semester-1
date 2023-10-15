#include<iostream>
using namespace std;
float calculateAverage(float marksEnglish,float marksMath,float marksChemistry,float marksSocialScience,float marksBiology);
string calculateGrade(float average);
main(){
    string name;
    float eng,math,chem,ss,bio;
    cout<<"Enter student name: ";
    cin>>name;
    cout<<"Enter marks for English: ";
    cin>>eng;
      cout<<"Enter marks for Maths: ";
    cin>>math;
      cout<<"Enter marks for Chemistry: ";
    cin>>chem;
      cout<<"Enter marks for Social Science: ";
    cin>>ss;
      cout<<"Enter marks for Biology: ";
    cin>>bio;
    float obtainedM=eng+math+chem+ss+bio;
    float percent=(obtainedM/500)*100;
    cout<<"Student Name: "<<name<<endl;
    float percentage=calculateAverage(eng,math,chem,ss,bio);
    cout<<"Percentage: "<<percentage<<"%"<<endl;
    string grade=calculateGrade(percentage);
    cout<<"Grade: "<<grade;

}
float calculateAverage(float marksEnglish,float marksMath,float marksChemistry,float marksSocialScience,float marksBiology){
float obtainedM=marksEnglish+marksMath+marksChemistry+marksSocialScience+marksBiology;
    float percent=(obtainedM/500)*100;
    return percent;
}
string calculateGrade(float average)
{string grade;
if(average>=90&&average<=100){
grade="A+";
}
if(average>=80&&average<90){
grade="A";
}
if(average>=70&&average<80){
grade="B+";
}
if(average>=60&&average<70){
grade="B";
}
if(average>=50&&average<60){
grade="C";
}
if(average>=40&&average<50){
grade="D";
}
if(average<40){
grade="F";
}
return grade;
}
