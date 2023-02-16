#include <iostream>

int main() {
    int a, b, b1;
    a = 31; b = 100 ;
    /*if (a<b) {*/
      while(b){
      b1 = b;
      b = a % b; 
      a = b1 ;
             }
      std::cout << a << std::endl;
}
