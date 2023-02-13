#include <iostream>
using namespace std;

void f(int n){
    int  past, next, a, i, min(0), max(0);
    cin >> past >> a;
    for (i = 2; i < n; i++){
        cin >> next;
        if (a>next && a>past){max+=1;}
        if (a<next && a<past){min+=1;}
        past = a;
        a = next;
    }
    if (max>min){cout << "MAX";}
    if (min>max){cout << "MIN";}
    if (max == min){cout << "EQUAL";}
}

int main(){
    int n;
    cin >> n;
    f(n);
    return 0;
}