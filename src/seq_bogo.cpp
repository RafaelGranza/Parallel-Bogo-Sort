#include <bits/stdc++.h>
#include "tools.cpp"
using namespace std;

vector<int> seq_bogo(vector<int> vec){
    mt19937 engine(time(0));
    while(not is_ordered(vec)){
        next(vec, engine);
    }
    return vec;
}