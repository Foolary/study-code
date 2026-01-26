//loops
#include <iostream>
using namespace std;

int main(){

    string name;
    /*while(name.empty()){
        cout << "Please enter your name: ";
        getline(cin,name);
        //cin >> name;



    }*/
   /* for(int i = 10; i > 0; i--){
      //count down to 10
      std::cout << i << '\n';
   }
 
   std::cout << "HAPPY NEW YEAR!\n";  */

    do{
        cout << "Please enter your name: ";
        getline(cin,name);
    }
    while(name.empty());
        //cin >> name;
       cout << "Hello " << name;

    
   
  

    return 0;

}