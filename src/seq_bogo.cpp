#include <bits/stdc++.h>
#include "tools.cpp"
using namespace std;

vector<int> seq_bogo(vector<int> vec){
    while(not is_ordered(vec)){
        next(vec);
    }
    return vec;
}