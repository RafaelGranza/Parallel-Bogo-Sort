#include <bits/stdc++.h>
using namespace std;

bool cuda_is_ordered(vector<int>& vec){
    return is_sorted(vec.begin(), vec.end());
}

void cuda_next(vector<int>& vec){
    random_shuffle(vec.begin(), vec.end());
}

vector<int> cuda_bogo(vector<int> vec){
    while(not cuda_is_ordered(vec)){
        cuda_next(vec);
    }
    return vec;
}