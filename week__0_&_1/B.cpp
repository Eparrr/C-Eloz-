#include <iostream>
using namespace std;

int f (int n){
   int r = 0, c; 
   for ( int i = 1; i <= n; i ++) 
   {
        c = i;
        while (c % 5 == 0) 
        { 
            r = r + 1; 
            c /= 5;
        }
   }
return r;
}

int main() { 
    int n; cin >> n;
    int с = f(n);
    cout << с << endl;
}