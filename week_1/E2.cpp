#include <iostream>
using namespace std;
float my_power(int base, int power){
    float a = 1; int i = 0;
    if (power == 0){
        return 1;
    }
    for (i; i > power; i--){
            a = a/base;
    }
    for (i; i < power; i++){
            a = a*base;
    }
    return a;
}

int main(){
    int base, power;
    cin >> base >> power;
    float r = my_power(base, power);
    cout << r;
}