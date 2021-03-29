#include <bits/stdc++.h>
#pragma once
using namespace std;

bool is_ordered(vector<int>& vec){
    return is_sorted(vec.begin(), vec.end());
}

void next(vector<int>& vec){
    random_shuffle(vec.begin(), vec.end());
}