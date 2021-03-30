#include <bits/stdc++.h>
#include "tools.cpp"

using namespace std;

vector<int> seq_bogo(vector<int> vec, int s = 0){
    mt19937 engine(time(0) + s);
    while(not is_ordered(vec)){
        next(vec, engine);
    }
    return vec;
}