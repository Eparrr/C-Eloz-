#include <iostream>
using namespace std;

#ifndef N
#define N 4
#endif

void reverseArray(int (&arr)[N]){
    for( int i=0; i<(N/2); i++){
        swap(arr[i],arr[N-1-i]);
    }
}

int main(){
    int arr[N];
    for (int i=0;i<N;i++){
        cin >> arr[i];
    }
    reverseArray(arr);
    for (int i=0;i<N;i++){
        cout << arr[i]  <<" ";
    }
}