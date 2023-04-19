#include <iostream>
#include <fstream>
#include <chrono>
#include <random>

#ifndef N
#define N 1000000
#endif


using namespace std;


void search_binar (long long arr[N], long long val, long long num) {
    long long l = 0;
    long long r = num;
    while (r > l) {
        long long m = (l + r) / 2;

        if (arr[m] < val) {
            l = m + 1;
        } else if (arr[m] > val) {
            r = m - 1;
        } else {
            break;
        }
    }
}


int main() {
    ofstream f("binsearch.txt", ios::out);
    long long num = 100;
    int unsigned seed = 1001;
    default_random_engine rng(seed);
    auto begin_memory = chrono::steady_clock::now();
    long long* arr = new long long[N];
    for (long long i = 0; i < N; ++i) {
        arr[i] = i;
    }
    for (num;num<=N;num +=1000){
        uniform_int_distribution<unsigned> dstr(0, num-1);
        auto begin = chrono::steady_clock::now();
        for (unsigned long long cnt = 100000; cnt != 0; --cnt) {
            search_binar(arr, arr[dstr(rng)], num);
        }
        auto end = chrono::steady_clock::now();
        auto time_span = chrono::duration_cast<chrono::milliseconds> (end - begin);
        auto time_span_memory = chrono::duration_cast<chrono::milliseconds> (end - begin_memory);
        cout << "\n\n";
        cout << time_span.count()<<' '<< time_span_memory.count() << ' ' << num << endl;
        f << time_span.count()<<' '<< time_span_memory.count() << ' ' << num << endl;
    }

    delete [] arr;
    return 0;
}
