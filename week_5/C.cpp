#include <iostream>
using namespace std;

int main(){
    int c=0;
    int *ptr = new int();
    while ( *(ptr + c -1) != 0)
    {
        cin >> *(ptr + c);
        c++;
    }

    for (int i=0; i < c - 2; i++)
    {
        cout << ptr[i] - ptr[i+1] << ' ';
    }
}