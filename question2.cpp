#include <iostream>
using namespace std;


int main(){

  int x=13,y=45,z=20;

 
 
 bool cx1=!(x-y<=10);
 bool cx2=x + y > 10 || z < 15;
 bool cx3=(x != y) && (x <= z); 
 bool cx4=(y - x >= z) || (2 * z <= y - x);


 
 




 cout<<boolalpha<<cx1<<endl;
 cout<<boolalpha<<cx2<<endl;
 cout<<boolalpha<<cx3<<endl;
 cout<<boolalpha<<cx4<<endl;









 return 0;
}