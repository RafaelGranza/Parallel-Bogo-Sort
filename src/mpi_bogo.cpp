#include <bits/stdc++.h>
#include "tools.cpp"
#include <mpi.h>



using namespace std;

vector<int> ompi_bogo(vector<int> vec){
    mt19937 engine(time(0));
    while(not is_ordered(vec)){
        next(vec, engine);
    }
    return vec;
}