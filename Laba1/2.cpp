#include <iostream>
#include <random>
#include <chrono>
#include <fstream>

void find_full(int (&)[], int, int);
void find_linal(int (&)[], int, int);
void fill_arr(int);
void time_output();

int main() {
    int n; int iterations;
    std::cout<<"Число опытов:";
    std::cin>>n;
    std::cout<<"Число поисков в одном массиве: ";
    std::cin>>iterations;
    int N = 100;

    for (int i=0;i<n; i++){
        int arr[N];
        fill_arr(arr, N);
        std::cout << time_output(N, iterations, find_full) << " " << time_output(N, iterations, find_linal);
        std::cout<<endl;
        N +=1000
   }
}

void fill_arr(int (&arr)[], int N){
    for (int i=0; i<N; i++){
        arr[i]=i;
    }
}

void find_full(int (&arr)[], int N, int number) {
    int i=0;
    int j=1;
    for(i;i<N;i++){
        for(j;j<N;j++){
            if(arr[i]+arr[j]==number && i!=j){
                break;
            }
        }
    }
    if (i==N && j==N){
        std::cout<<"таких нет";
    }

int find_linal(int (&arr)[], int N, int number){

}


int time_output(int N; int iterations; int *find(int (&)[], int, int)) {  
        unsigned seed = 1001;
        std::default_random_engine rng(seed);
        std::uniform_int_distribution<unsigned> dstr(0 , N);

        int number = dstr(rng);
        
        auto begin = std::chrono::steady_clock::now();

        for (int i=0;i<iterations; i++){
            find( arr, N, number);
        }

        auto end = std::chrono::steady_clock::now();
        auto time_span = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);
    return time_span;
}