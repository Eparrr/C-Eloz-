#include <iostream>

using namespace std;

bool f( int n){
    if (n % 100 == 0 && n % 400 != 0) {return false;}
    else if (n % 4 == 0) {return true;}
    else {return false;}
}

int main() {
        int n; cin >> n;
        bool c = f(n);
        if (!c){ cout << "no" << endl;}
        else {cout << "yes" << endl;}
}