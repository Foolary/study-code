//simple calculator
#include <iostream>
#include <cmath>


int main(){

double a;
double b;
double c;

std:: cout << "Enter A "<< '\n';
std:: cin >> a;

std :: cout << "Enter B" << '\n';
std :: cin >> b;

c = sqrt(pow(a,2) + pow(b,2));
//c = sqrt(pow(a, 2) + pow(b, 2));

std :: cout << "c is "<< c;


return 0;
}

/*#include <iostream>
#include <cmath>

int main() 
{
   double a;
   double b;
   double c;

   std::cout << "Enter side A: ";
   std::cin >> a;

   std::cout << "Enter size B: ";
   std::cin >> b;

   c = sqrt(pow(a, 2) + pow(b, 2));

   std::cout << "side C: " << c;
//"hello there" 
   return 0;
}*/