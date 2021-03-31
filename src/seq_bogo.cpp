#include <bits/stdc++.h>
#include "tools.cpp"

using namespace std;

vector<int> seq_bogo(vector<int> vec, int s = 0){
    unsigned seed = time(0) * (s+1);
    mt19937 engine(seed);

    while(not is_ordered(vec)){
        next(vec, engine);
    }
    return vec;
}