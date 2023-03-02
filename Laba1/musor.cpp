#include <iostream>
using namespace std;

#ifndef N
#define N 5
#endif



void sort_step( int arr[N], float &factor, int &step) {
    while (step <= N ) 
    {
        for (int i = 0; i + step < N; ++i) 
        {
            if (arr[i] > arr[i + step]) 
            {
                swap(arr[i], arr[i + step]);
            }
        }
        step *= factor;
    }
}


void sort_main(int arr[N]){
    float factor = 2;
    int step = 2;
    while ( step <= N )
    {
        sort_step(arr, factor, step);
        for ( int i = 0; i < N; i++ )
        {
            for (int j = 0; j < N-i-1; j++) 
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
    int arr[N];
    for ( int i = 0 ; i < N; i++ )
    {
        cin >> arr[i];
    }
    sort_main(arr);
    for ( int i = 0; i < N; i++ )
    {
        cout << arr[i] << " ";
    }
}