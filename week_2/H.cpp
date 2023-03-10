#include <iostream>
using namespace std;

#ifndef N
#define N 2
#define M 4
#endif

void print_transposed(int (&array)[N][M]){
    for (int j = 0; j < M; j++) {
        for (int i = 0; i < N; i++)
            cout << array[i][j] << ' ';

    cout<<endl;
    }
}

int main() {
    int array[N][M];
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            cin >> array[i][j];
        }
    }
    cout<<endl;
    print_transposed(array);
    return 0;
}
