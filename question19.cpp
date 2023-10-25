#include <iostream>
using namespace std;

int age;


int main(){
 
 cout<<"Human Term Calculator"<<endl;
 cout<<"**********************"<<endl;
 cout<<"What`s your age?:";
 cin>>age;
 
 
 if(age<=1){
  cout<<"You`re baby!";
 }
 else if(1<age && age<13){
  cout<<"You`re child!";
 }
 else if(13<age && age<20){
  cout<<"You`re teenager!";
 }
 else if(age>=20){
  cout<<"You`re adult!";
 }




 return 0;
}   