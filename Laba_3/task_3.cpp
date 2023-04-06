#include <iostream>
#include <fstream>
#include <random> 

using namespace std;

const int disloc_count_max = 5000;
const int crystal_size = 100 ;

int unsigned seed = 1;
default_random_engine rng(seed);
uniform_int_distribution<unsigned> dstr(1, crystal_size);
uniform_int_distribution<unsigned> dir(0, 2);


struct Dislocasions
{
    int x,dx;
    bool stop = false;
};


int main()
{
    ofstream f("C:/Users/Hp/Desktop/Laba_3/laba3.txt", ios::out);
    for(int disloc_count = disloc_count_max; disloc_count>0;disloc_count--){
        Dislocasions* dis = new Dislocasions[disloc_count_max];
        for (int k = 0;k < disloc_count; ++k) 
        { 
            dis[k].x = dstr(rng);
        }
        bool all_stop = false;
        int time = 0; 
        while (!all_stop) 
        { 
            all_stop = true; 
            for (int i = 0; i < disloc_count; ++i) 
            {
                
                if (!dis[i].stop){
                int p = dir(rng), dx = 0;
                
                switch (p) 
                {
                    case 0: dis[i].dx = -1;
                    case 1: dis[i].dx = 1; 
                }
                if (dis[i].x + dx < 1 || dis[i].x + dx >= crystal_size -1)  
                {
                    dis[i].dx=0;
                    dis[i].stop = true;
                }
                else{
                all_stop = false;
            }}}
            for (int i = 0; i < disloc_count; i++) 
            {
                bool cross = false;
                for (int j = 0; j < disloc_count; j++)
                {
                    if(j!=i && !dis[i].stop)
                    {
                        if((dis[i].x+dis[i].dx==dis[j].x+dis[j].dx)||(dis[i].x+dis[i].dx==dis[j].x+dis[j].dx)||(dis[i].x+dis[i].dx==dis[j].x+dis[j].dx)||(dis[i].x+dis[i].dx==dis[j].x+dis[j].dx+1)||(dis[i].x+dis[i].dx==dis[j].x+dis[j].dx-1)){
                            dis[i].stop=true;
                        }
                        if(dis[i].x+dis[i].dx==dis[j].x+dis[j].dx){
                            cross = true;
                        }
                    }
                }
                if(!cross){
                    dis[i].x+=dis[i].dx;
                    
                }
                dis[i].dx=0;
                
            } 
            time++;
        }
        f<<time<<' '<<disloc_count<<endl;
    delete dis;
    }
}