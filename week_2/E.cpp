#include <iostream>
using namespace std;

#ifndef N
#define N 3
#endif 

void mergeArrays(int (&a)[N], int (&b)[N], int (&c)[2 * N]){
    for (int i = 0; i<N; i++){
        c[i] = a[i];
    }
    for (int i = N; i<2 * N; i++){
        c[i] = b[i-N];
    }
    for (int i = 0; i < 2*N - 1; i++) {
        for (int j = 0; j < 2*N - i - 1; j++) {
            if (c[j] > c[j + 1]) {
                swap(c[j], c[j+1]);
            }
        }
    }
}

int main(){
    int a[N];
    int b[N];
    int c[2 * N];
    for (int i=0;i<N;i++){
        cin >> a[i];
    }
    for (int i=0;i<N;i++){
        cin >> b[i];
    }
    mergeArrays(a, b, c);
    for (int i=0;i<2 * N;i++){
        cout << c[i]<<' ';
    }
}
    



