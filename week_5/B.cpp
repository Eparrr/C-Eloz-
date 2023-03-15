#include <iostream>
using namespace std;



int main(){
    short int * sptr = new short int[10];
    for (short int i = 0; i < 10; i++)
    {
        sptr[i] = i;
        cout << &sptr[i] << ' ';
    }
    cout<<endl;

    for (short int i = 0; i < 10; i++)
    {
        sptr[i] = i;
        cout << sptr[i] << ' ';
    }
    cout<<endl;

    for (short int i = 0; i < 9; i+=2)
    {
        sptr[i] = i*i;
        cout << sptr[i] << ' ' <<sptr[i+1] << ' ';
    }
}
