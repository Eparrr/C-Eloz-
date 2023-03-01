#include <iostream>
using namespace std;

#ifndef N
#define N 5
#endif

void read_array(int (&a)[N]){
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
}


void output_array (int (&a)[N]){
    for (int i = 0; i < N; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;   
}

void reverse(int (&a)[N], int index){
    for(int i = 0; i < (index+1)/2; i++)
    {
        swap(a[i], a[index - i]);
    }
}

void pancakeSort(int (&a)[N]){
    for(int n = N; n > 1; n--){
        int i_max = n - 1;
        for(int j = 0; j < n; j++){
            if(a[j] > a[i_max]){
                i_max = j;
            }
        }
        if(i_max != n - 1){
            reverse(a, i_max);
            reverse(a, n - 1);
        }
    }
}

int main(){
    int a[N];
    read_array(a);
    pancakeSort(a);
    output_array(a);
}