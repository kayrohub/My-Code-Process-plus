#include <iostream>
using namespace std;


double A1,A2,A3,A4,A5;
double BW,WM,WAM,HM,FM;
double B,BF,BFP;

int main(){

 
 
 do{
 cout<<"Please enter your weight to calculate your Body fat:";
 cin>>BW;

 cout<<"Please enter your wrist to calculate your Body fat:";
 cin>>WM;


 cout<<"Please enter your waist to calculate your Body fat:";
 cin>>WAM;


 cout<<"Please enter your hips to calculate your Body fat:";
 cin>>HM;


 cout<<"Please enter your forearm to calculate your Body fat:";
 cin>>FM;

 A1=(BW*0.732)+8.987;
 A2=(WM*3.140);
 A3=(WAM*0.157);
 A4=(HM*0.249);
 A5=(FM*0.434);

 B=A1+A2-A3-A4+A5;
 BF=BW-B;
 BFP=BF*100/BW;

 cout<<"Your body fat:"<<BF<<endl;
 cout<<"Your body fat percentage:"<<"%"<<BFP;



 }while(BW,WM,WAM,HM,FM>0);







}