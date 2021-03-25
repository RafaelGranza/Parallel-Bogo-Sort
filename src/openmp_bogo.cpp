#include <bits/stdc++.h>
using namespace std;

bool is_ordered(vector<int>& vec){
    return is_sorted(vec.begin(), vec.end());
}

void next(vector<int>& vec){
    random_shuffle(vec.begin(), vec.end());
}

vector<int> seq_bogo(vector<int> vec){

    // Talvez criar várias cópias e rodar cada uma em thread
    
    while(not is_ordered(vec)){
        next(vec);
    }
    return vec;
}