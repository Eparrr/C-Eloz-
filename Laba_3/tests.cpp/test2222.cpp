#include <iostream>
#include <fstream>
#include <random> 

using namespace std;

const int disloc_count = 5;
const int crystal_size = 1000000 ;

int unsigned seed = 1001;
default_random_engine rng(seed);
uniform_int_distribution<unsigned> dstr(1, crystal_size);


struct Dislocasions
{
    int x,y;
    bool stop;
};


int main()
{
for (int count = 2; count<disloc_count;count++)
{
    Dislocasions dis[count];
    for (int k = 0;k < count; ++k) 
    { 
        dis[k].x = dstr(rng);
        dis[k].y = dstr(rng);
    } 
 
    bool all_stop = false; 
    int time = 0; 
    while (!all_stop) 
    { 
        all_stop = true; 
        for (int i = 0; i < count; ++i) 
        { 
            if (dis[i].stop) continue; 
            int p = dstr(rng), dx = 0, dy = 0; 
            switch (p) 
            { 
                case 0: dx = -1; 
                case 1: dx = 1; 
                case 2: dy = -1; 
                case 3: dy = -1; 
            } 
            if (dis[i].x + dx < 0 || dis[i].x + dx >= crystal_size || dis[i].y + dy < 0 || dis[i].y + dy >= crystal_size)  
            {
                dis[i].stop = true; 
            }
                else 
                { 
                    bool contact = false; 
                    for (int t = 0; t < count; t++) 
                    { 
                        if (i == t || dis[t].stop) continue; 
                        if (dis[i].x + dx == dis[t].x && dis[i].y + dy == dis[t].y) 
                        { 
                            if (dx == 0 || dy == 0) dis[t].stop = true; 
                            else contact = true; 
                            break; 
                        } 
                    } 
 
                    if (!contact) 
                    { 
                        dis[i].x += dx; 
                        dis[i].y += dy; 
                        
                    } 
                } 
 
                    all_stop &= dis[i].stop; 
        } 
        time++; 
   
    }
        for(int i = 0; i<crystal_size;i++)
        {
            for (int j=0; j<crystal_size;j++)
            {
                int b = 0;
                for (int k=0; k<disloc_count;k++)
                {
                    if (dis[k].x == i && dis[k].y == j) b=1;
                }
                cout<<b<<' ';
            }
            cout<<endl;

        }
}

}









