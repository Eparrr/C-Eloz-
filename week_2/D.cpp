#include <iostream>
using namespace std;

#ifndef N
#define N 3
#endif

void moveNegativeToEnd(int (&arr)[N]){
    int k=0;
    for (int i=0;i<N;i++){
        if (arr[i]>0){
            int j = i;
            k += 1;
            for (j; j>k-1; j--){
                swap(arr[j], arr[j-1]);
            }
        }
    }
}

int main(){
    int arr[N];
    for (int i=0;i<N;i++){
        cin >> arr[i];
    }
    moveNegativeToEnd(arr);
    for (int i=0;i<N;i++){
        cout << arr[i]<<' ';
    }
}
