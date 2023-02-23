#include <iostream>
using namespace std;

#ifndef N
#define N 9
#endif 

int findUnique(int (&arr)[N]){
    int a = arr[0];
    for(int i = 1;i<N;i++){
        a = a ^ arr[i];
    }
    return a;
}
int main(){
    int arr[N];
    for (int i=0;i<N;i++){
        cin >> arr[i];
    }
    cout<<findUnique(arr);

}