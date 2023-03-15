#include <iostream>
using namespace std;

int main(){
    double * dptr;
    double a = 0;
    *dptr = a;
    cout << dptr << ' ' << *dptr <<endl;
    
    dptr  = dptr - 3;
    cout << dptr << ' ' << *dptr <<endl;
    
    dptr  = dptr + 5;
    cout << dptr << ' ' << *dptr;

}