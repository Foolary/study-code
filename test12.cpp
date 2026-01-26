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
/* //int i= 0;
for (  int i= 0;i <= 50; i+=5 ){
  cout << i << '\n';
  if (i == 6){cout <<"lol 6 HEHEHE "<< '\n';}
else if (i==7){cout <<"lol 7 FUKC I SAID IT"<< '\n';}
else {cout << "RAAAAAWWRR"<<'\n';}*/

   //for(int i = 10; i > 0; i--){
      //count down to 10
     // std::cout << i << '\n';
//cout << x;
 // do{cout << "lol" << '\n';}
 //if(x == 6 ){cout << "lol" << '\n';}
    
   
  

    return 0;


}
