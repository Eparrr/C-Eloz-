#include <iostream>
#include <cmath>

int main() {
    int a, b, c, D;
    float x1, x2;
    a = 1; b = -6 ; c = 9 ;
    D = b*b - 4*a*c;
    if (D<0) {
       std::cout << "No sollutions" << std::endl;  
     } else {
       x1 = (-b + sqrt(D))/(2*a); x2 = (-b - sqrt(D))/(2*a);
       std::cout << x1 << " " << x2 << std::endl;
     }

}