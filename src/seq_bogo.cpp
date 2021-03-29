#include <bits/stdc++.h>
#include "tools.cpp"
using namespace std;

vector<int> seq_bogo(vector<int> vec){
    int i = 1;
    mt19937 engine(time(0));
    while(not is_ordered(vec)){
        next(vec, engine);
        // for(auto v: vec) cout << v << " ";
        // cout << endl;
    }
    return vec;
}