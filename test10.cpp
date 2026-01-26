#include <iostream>

int main() {

int age;

std :: cout << "Enter your age " << '\n';
std :: cin >> age;

if (age > 18 && age<50){
std :: cout << "You may enter this establishment" << '\n';


}else if ( age < 18 ){
    std:: cout << "You are banished from this bar";
}
else if  (age > 50){
    std :: cout << "you get the senior discount";
}
// && and
// || or
// !! not


    return 0;
}