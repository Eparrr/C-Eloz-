#include <iostream>

using namespace std;

int f(int n){
    int invers = 0;
    while(n){
        invers = invers*10 + n % 10;
        n = n / 10;
    }
    return invers;
}

int main() {

    int n; cin >> n ;
    int invers = f(n);
    if (invers == n) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}