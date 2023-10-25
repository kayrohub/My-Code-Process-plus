#include <iostream>
using namespace std;

int male;
int female;
double malepercentage;
double femalepercentage;
int totalstudent;


int main(){

 cout<<"Class gender percentage calculator"<<endl;
 cout<<"*******************************************"<<endl;
 cout<<"Please give amount of male inside of class:";
 cin>>male;
 cout<<"Please give amount of female inside of class";
 cin>>female;


 totalstudent=male+female;
 double percentageMales = (static_cast<double>(male) / totalstudent) * 100;
 double percentageFemales = (static_cast<double>(female) / totalstudent) * 100;


 cout<<"Class Gender Percentage result"<<endl;
 cout<<"******************************"<<endl;
 cout<<"Male Student Percentage:%"<< percentageMales<<endl;
 cout<<"female Student Percentage:%"<<percentageFemales<<endl;

 





 
 







 







 return 0;   
}