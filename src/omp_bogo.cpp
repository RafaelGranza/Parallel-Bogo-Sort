#include <bits/stdc++.h>
#include "tools.cpp"
#include <omp.h>
using namespace std;

vector<int> omp_bogo(vector<int>& vec, int size = 10){

    // Talvez criar várias cópias e rodar em diferentes threads
    vector<vector<int>> vecs(size, vec);
    bool done = false;
     
    #pragma omp parallel for reduction(|:done)
    for(int i = 0; i < size; i++){
        next(vecs[i]);
        if(is_ordered(vecs[i])) {
            cout << "cabou" << endl;
            done = true;
            vec = vecs[i];
        }
    }
    
    while(!done){
        #pragma omp parallel for reduction(|:done)
        for(int i = 0; i < size; i++){
            if(is_ordered(vecs[i])) {
                cout << "cabou" << endl;
                done = true;
                vec = vecs[i];
            }
            next(vecs[i]);
        }

    }
    return vec;
}