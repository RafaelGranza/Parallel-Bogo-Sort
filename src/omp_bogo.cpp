#include <bits/stdc++.h>
#include <omp.h>
#include "seq_bogo.cpp"
using namespace std;

bool omp_is_ordered(vector<int>& vec){
     for(auto& v: vec) if(is_ordered(v)) return true;
}

vector<int> omp_ordered(vector<vector<int>>& vec){
    for(auto& v: vec) if(is_ordered(v)) return v;
}

void omp_next(vector<vector<int>>& vec){
    for(auto& v: vec) random_shuffle(v.begin(), v.end());
}

vector<int> omp_bogo(vector<int> vec){

    // Talvez criar várias cópias e rodar em diferentes threads

    vector<vector<int>> vecs(10, vec);

    #pragma omp parallel
    while(not omp_is_ordered(vecs)){
        omp_next(vecs);
    }
    return vec;
}