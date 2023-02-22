#include <iostream>
using namespace std;

#ifndef N
#define N 5
#endif 

int findLastZero(int (&a)[N]){
    int c =2;
    int j=N/2;
    for (int i=0; i<N; i++){
        if (a[j]==0 && a[j+1]==1){
            return j;
        } else {
            if (a[j]==0){
                j=(N+j)/2;
                } else {
                    j=j/2;
                }
        }
    }
}

int main(){
    int a[N];
    for (int i=0;i<N;i++){
        cin >> a[i];
    }
    cout << findLastZero(a);
}


