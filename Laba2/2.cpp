#include <iostream>
#include <fstream>
#include <chrono>
#include <random>

using namespace std;

#ifndef N
#define N 10000
#endif


int k = 0;
void sort_step( long long arr[N], int &factor, long long &step, int num) {
    while (step <= num ) 
    {
        for (long long i = 0; i + step < num; ++i) 
        {
            if (arr[i] > arr[i + step]) 
            {
                swap(arr[i], arr[i + step]);
                k +=1 ;
            
            }
        }
        step *= factor;
    }
}


void sort_main(long long arr[N], int num){
    int factor = 2;
    long long step = 2;
    while (step <= num)
    {
        sort_step(arr, factor, step, num);
        for ( long long i = 0; i < num; i++ )
        {
            for ( long long j = 0; j < num-i-1; j++ ) 
            {
                if ( arr[j] > arr[j+1] ) 
                {
                    swap( arr[j], arr[j+1] );
                }
            }
        }
    }
}


int main() {
    ofstream f("C:/Users/Hp/Desktop/LABA2/laba_2.txt", ios::out);
    long long num = 1;
	long long* arr = new long long[N];
		for (long long i = 0; i < N; i++) {
		arr[i] = N - i;
	}
	for(num;num<=N;num+=100){
	    auto begin = chrono::steady_clock::now();
	    for (unsigned long long cnt = 1000; cnt != 0; --cnt) {
		    sort_main(arr, num);
	    }
	    auto end = chrono::steady_clock::now();
	    auto time_span = chrono::duration_cast<chrono::milliseconds>(end - begin);
	    cout << "\n\n";
	    cout << time_span.count()<<' '<<num << ' ' << k << endl;
	    f << time_span.count()<<' '<<num << ' ' << k << endl;
        k = 0;
	}
	return 0;
}