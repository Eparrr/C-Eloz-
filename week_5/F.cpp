#include <iostream>
using namespace std;

char* resize(const char* arr, int size, int new_size){
    char* new_arr = new char[new_size];
    if (new_size < size) 
    {
        size = new_size;
    }
    for (int i = 0; i < size; ++i) {
        new_arr[i] = arr[i];
    }
    delete[] arr;
    return new_arr;
}

int main() {
    int size, new_size;
    cout << "size:";
    cin >> size;
    cout << "new_size:";
    cin >> new_size;
    char* a = new char[size];
    for (int i=0; i<size; i++)
    {
        cin >> *(a+i);
    }
    cout << resize(a, size, new_size);
    delete[] a;
}




