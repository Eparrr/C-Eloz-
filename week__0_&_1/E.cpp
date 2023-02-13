#include <iostream>
using namespace std;
float recursive_power(float base, int power){
    if (power == 0){
        return 1;
    }
    if (power < 0){
        return (recursive_power(base, power+1)/base);
    }
    return (base*recursive_power(base, power-1));
}

int main(){
    int base, power; 
    cin >> base >> power;
    float r = recursive_power(base, power);
    cout << r;

}