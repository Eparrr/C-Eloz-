#include <iostream>
using namespace std;

int N,M;

void print_transposed(int** array){
    for (int i=0; i<M; i++){
        for(int j=0; j<N; j++){
            cout<<array[j][i]<<' ';
        }
        cout<<endl;
    }
}
int main(){
    cin>>N>>M;
    int** array = new int*[N];
    for(int i = 0;i<N;i++){
        array[i] = new int[M];
    }
    for(int i = 0;i<N;i++){
        for(int j = 0;j<M;j++){
            cin>>array[i][j];
        }
    }
    print_transposed(array);
    delete(array);
    return 0;
}
