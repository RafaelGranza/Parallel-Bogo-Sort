#include <bits/stdc++.h>
#include "tools.cpp"
#include <omp.h>

using namespace std;

vector<int> omp_bogo(vector<int>& vec, int size = 2){

    vector<vector<int>> vecs(size, vec);
    vector<mt19937> engine(size);
    bool done = false;
     
    #pragma omp parallel for shared(vecs, engine)
    for(int i = 0; i < size; i++){
        engine[i] = mt19937(omp_get_thread_num()*(i+1));
        next(vecs[i], engine[i]);
    }
    
    #pragma omp parallel num_threads(size) shared(vecs, engine, done)
    {
        while(not is_ordered(vecs[omp_get_thread_num()]) && !done){
            next(vecs[omp_get_thread_num()], engine[omp_get_thread_num()]);
        }
        done = true; 
    }

    for(int i = 0; i < size; i++){
        if(is_ordered(vecs[i])){
            return vecs[i];
        }
    }
    return vec;
}