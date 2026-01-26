#include <iostream>

namespace first {
    int x = 1;
}
namespace second {
   int x = 2;
}

int main (){
   using namespace first;
   using std :: cout;


 //std :: cout << x;
 cout << second :: x;
    return 0;

}