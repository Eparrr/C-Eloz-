#include <iostream>

int main () {
    int n = 23; int c = n/2; int k = 0;
    for(int i = 2; i <= c; i = i+1) {
        if (n % i == 0) {
            k = k+1;
        }
     }
    if (k==0){
        std::cout << "Prostoe" << std::endl;
        } else { std::cout << "Sostavnoe" << std::endl;
     }
    
}