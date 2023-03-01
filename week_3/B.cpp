#include <iostream>
#include <chrono>
using namespace std;



#ifndef N
#define N 10
#endif

void doubleSelectSort(int a[N]) {
        for (int i = 0; i < N/2; i++)
    {
        int i_min = i;
        int i_max = i;
        for (int j = i + 1; j < N - i; j++)
        {
            if (a[j] < a[i_min])
            {
                i_min = j;
            }
            if (a[j] > a[i_max])
            {
                i_max = j;
            }
        }
        if (i_min != i)
        {
            swap(a[i], a[i_min]);
        }
        if (a[i_min] > a[i_max]){
            swap(a[i_min],a[N-i-1]);
        }
        else if (i_max != N-i-1)
        {
            swap(a[i_max],a[N-i-1]);
        }
    }
}

void read_array (int (&a)[N]) {
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
}

void output_array(int (&a)[N]) {
        for (int i = 0; i < N; i++)
        {
        cout << a[i] << " ";
        }
    cout <<endl;
}


int main() {
    int a[N];
    
    read_array(a);

    auto begin = std::chrono::steady_clock::now();
    for(unsigned cnt = 100000; cnt != 0 ; --cnt)
        doubleSelectSort(a);
    auto end = std::chrono::steady_clock::now();
    auto time_span =
    std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);

    std::cout << "\n\n";
    std::cout << "TIME: " << time_span.count() << " ms" << std::endl;
    
    output_array(a);
}
