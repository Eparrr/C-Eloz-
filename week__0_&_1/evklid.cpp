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

#include <iostream>
using namespace std;

int main() {
   int n, a, a_p, i, min(0), max(0);
   cin >> n >> a_p;
   for ( i = 1; i < n; i++){
      cin >> a;
      if(a < a_p){min += 1;}
      if(a > a_p){max += 1;}
      a_p = a;
   }
   if (max > min){cout << "MAX";}
   if (min > max){cout << "MIN";}
   if (max = min){cout << "RAVN";}
   return 0;
}