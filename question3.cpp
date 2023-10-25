#include <iostream>
using namespace std;






int main(){
 string a;
 string b;
 string c;
 string d;
 string e;




 string str1;
 string str2;
 string str3;

 a=str1<=str2;
 b=str1 !="low";
 c=str2<=str1;
 d=str3>"Medium";
 e=str3<="Light";


 cout<<a;
 cout<<b;
 cout<<c;
 cout<<d;
 cout<<e;

 //İ WİLL İNVESTİGATE İT
 //STAYED HALF







 return 0;
}










#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "Low";
    string str2 = "High";
    string str3 = "Medium";

    // a. str1 <= str2 
    cout << "a. " << (str1 <= str2) << endl; // This will compare "Low" with "High" lexicographically.

    // b. str1 != "low" 
    cout << "b. " << (str1 != "low") << endl; // This will compare "Low" with "low". Since they are not the same, it will return true.

    // c. str2 <= str1 
    cout << "c. " << (str2 <= str1) << endl; // This will compare "High" with "Low" lexicographically.

    // d. str3 > "Medium" 
    cout << "d. " << (str3 > "Medium") << endl; // This will compare "Medium" with "Medium". 

    // e. str3 <= "Light"
    cout << "e. " << (str3 <= "Light") << endl; // This will compare "Medium" with "Light".

    return 0;
}
