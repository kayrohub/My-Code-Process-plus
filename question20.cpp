#include <iostream>
using namespace std;

string color="Red";
string color2="Yellow";
string color3="Blue";

string option;
string option2;



int main(){
 cout<<"Color Mixer Guide"<<endl;
 cout<<"*****************"<<endl;
 cout<<"Color options:(Blue,Red,Blue)"<<endl;
 cout<<"Please select your color:";
 cin>>option;
 cout<<"Please select second your color:";
 cin>>option2;

 do{
 if(option=="Red" && option2=="Yellow"){
  cout<<"Your color is Orange!";
 }
 else if(option=="Red" && option2=="Blue"){
  cout<<"Your color is Purple!";
 }
 else if(option2=="Blue" && option=="Yellow"){
  cout<<"Your color is Green!";
 }
 else{
 cout << "Error: Invalid combination. Please enter two different primary colors." << endl;
 }
 } while ((option == "Red" || option == "Blue" || option == "Yellow") && (option2 == "Red" || option2 == "Blue" || option2 == "Yellow"));

 return 0;
 }







 





 
 







 
