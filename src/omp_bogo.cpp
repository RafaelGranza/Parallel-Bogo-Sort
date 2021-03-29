#include <bits/stdc++.h>
#include "tools.cpp"
#include <omp.h>
using namespace std;

vector<int> omp_bogo(vector<int>& vec, int size = 12){

    // Talvez criar várias cópias e rodar em diferentes threads
    vector<vector<int>> vecs(size, vec);
    vector<mt19937> engine(size);
    bool done = false;
     
    #pragma omp parallel for shared(vecs, done)
    for(int i = 0; i < size; i++){
        engine[i] = mt19937(omp_get_thread_num()*(i+1));
        next(vecs[i], engine[i]);
        if(is_ordered(vecs[i])) {
            done = true;
            vec = vecs[i];
        }
    }

    while(!done){
        #pragma omp parallel for  shared(vecs, done)
        for(int i = 0; i < size; i++){
            if(is_ordered(vecs[i])) {
                done = true;
                vec = vecs[i];
            }
            next(vecs[i], engine[i]);
        }
    }
    
    return vec;
}