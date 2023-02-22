#include <iostream>
using namespace std;

#ifndef N
#define N 6
#endif

void shiftRight(int (&arr)[N]){
    for (int i=N-1;i>0;i--){
        swap(arr[i], arr[i-1]);

    }
}

int main(){
    int k;
    cin >> k;
    int arr[N];
    for (int i=0;i<N;i++){
        cin >> arr[i];
    }
    for (int i=0;i<k; i++){
        shiftRight(arr);
    }
     for (int i=0;i<N;i++){
        cout << arr[i]<<' ';
    }
}