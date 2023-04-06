#include <iostream>
#include <fstream>
#include <random> 

using namespace std;

const int disloc_count = 8;
const int crystal_size = 8;

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
    ofstream f("C:/Users/Hp/Desktop/Laba_3/laba3.txt", ios::out);
    Dislocasions dis[disloc_count];

    int count = disloc_count;
    for(int r = 0; r<disloc_count;r++)
    {
    
    for (int k = 0;k < count; ++k) 
    { 
        dis[k].x = dstr(rng);
        dis[k].y = dstr(rng);
        cout << dis[k].x << " " << dis[k].y << endl; 
    } 
 
    bool all_stop = false; 
    int time = 0; 
    while (!all_stop) 
    { 
        all_stop = true; 
        for (int i = 0; i < disloc_count; ++i) 
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
    cout<<time;
    f<<count/crystal_size<<' '<<time<<endl;

}
}





int main(){
Dislocasions dislocations[j];
for (int k = 0; k < j; ++k) 
            { 
                dislocations[k].x = dstr(rng); 
                dislocations[k].y = dstr(rng); 
                cout << dislocations[k].x << " " << dislocations[k].y << endl; 
            } 
 
            bool all_stopped = false; 
            int steps = 0; 
            while (!all_stopped) 
            { 
                all_stopped = true; 
                for (int i = 0; i < j; ++i) 
                { 
                    if (dislocations[i].stopped) 
                        continue; 
 
                    int d = dstr(rng), dx = 0, dy = 0; 
                    switch (d) 
                    { 
                        case 0: dx = 1; 
                        case 1: dx = -1; 
                        case 2: dy = 1; 
                        case 3: dy = -1; 
                    } 
 
                    if (dislocations[i].x + dx < 0 || dislocations[i].x + dx >= a || dislocations[i].y + dy < 0 || dislocations[i].y + dy >= a) 
                        dislocations[i].stopped = true; 
 
                    else 
                    { 
                        bool collision = false; 
                        for (int c = 0; c < j; ++c) 
                        { 
                            if (i == c || dislocations[c].stopped) 
                                continue; 
 
                            if (dislocations[i].x + dx == dislocations[c].x && dislocations[i].y + dy == dislocations[c].y) 
                            { 
                                if (dx == 0 || dy == 0) 
                                    dislocations[c].stopped = true; 
 
                                else 
                                    collision = true; 
 
                                break; 
                            } 
                        } 
 
                        if (!collision) 
                        { 
                            dislocations[i].x += dx; 
                            dislocations[i].y += dy; 
                            steps++; 
                        } 
                    } 
 
                    all_stopped &= dislocations[i].stopped; 
                } 
            }
        cout<<steps;
}
