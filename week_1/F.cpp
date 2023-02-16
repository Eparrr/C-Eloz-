#include <iostream>
using namespace std;

unsigned long int fibonacci(unsigned int i){
    if(i == 0){return 0;}
    if(i == 1){return 1;}
    return (fibonacci(i - 2) + fibonacci(i - 1));
}

int main(){
    unsigned int i;
    cin >> i;
    cout << fibonacci(i);
    return 0;
}