#include <iostream>

int main() {

std :: string name;
int age;

std :: cout << "What's your name?"<< '\n';
std :: cin >> name ;
/*std::cout << "What's your full name?: ";
   std::getline(std::cin >> std::ws, name);*/
   // this if for spaces (when you want to write your full name for exmple)
   //  std::ws, is used to get rid of the problem of whitespaces
   /*for exmple you have another cin beofre this one
   itd read the input as a '\n' so itd goof
   now it won't*/ 
std :: cout << "How old are you?" << '\n';
std :: cin >> age;
std :: cout << "Your name is " << name << '\n' ;
std :: cout << "You are "<< age << " years old";




    return 0;
}