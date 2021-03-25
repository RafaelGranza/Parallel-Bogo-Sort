#include <bits/stdc++.h>
#include <omp.h>
using namespace std;

bool omp_is_ordered(vector<int>& vec){
    return is_sorted(vec.begin(), vec.end());
}

void omp_next(vector<int>& vec){
    random_shuffle(vec.begin(), vec.end());
}

vector<int> omp_bogo(vector<int> vec){

    // Talvez criar várias cópias e rodar em diferentes threads
    #pragma omp parallel
    while(not omp_is_ordered(vec)){
        omp_next(vec);
    }
    return vec;
}