#include <iostream>
using namespace std;

void f(int n){
   int  a, a_p, i, min(0), max(0);
   cin >> a_p;
   for ( i = 1; i < n; i++){
      cin >> a;
      if(a < a_p){min += 1;}
      if(a > a_p){max += 1;}
      a_p = a;
   }
   if (max > min){cout << "MAX";}
   if (min > max){cout << "MIN";}
   if (max == min){cout << "RAVN";}
}

int main() {
   int n;
   cin >> n;
   f(n);
   return 0;
}