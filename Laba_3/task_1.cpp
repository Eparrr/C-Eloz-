#include <fstream>
#include <random>
using namespace std;

const int max_crystal_size = 500000;
const int disloc_count = 1;

int unsigned seed = 1001;
default_random_engine rng(seed);
uniform_int_distribution<unsigned> dstr(1, 5);

int main()
{
    ofstream f("C:/Users/Hp/Desktop/Laba_3/laba3.txt", ios::out);
    for (int crystal_size = 100; crystal_size<max_crystal_size; crystal_size+=1000)
    {
        int disloc_x = crystal_size/2, disloc_y = crystal_size/2;
        int count = 0;
        while (disloc_x !=0 && disloc_x != crystal_size && disloc_y !=0 && disloc_y != crystal_size)
        {
            int direction = dstr(rng);
            if (direction == 1)
            {
                disloc_x += 1;
            }
            else if (direction == 2)
            {
                disloc_x -= 1;
            }
            else if (direction == 3)
            {
                disloc_y += 1;
            }
            else if (direction == 4)
            {
                disloc_y -= 1;
            }
            count ++;
        }
        f<<crystal_size<<' '<<count<<endl;
        }
        
    }
   












