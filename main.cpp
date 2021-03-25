#include <bits/stdc++.h>
#include "src/seq_bogo.cpp"
#include "src/omp_bogo.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
    // vector<int> vec = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0}; // Seq: ~ 1m 20s
    vector<int> vec = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0}; // Seq: ~ 1,5s
    // vector<int> vec = {5, 4, 3, 2, 1, 0}; // Seq: 0s
    
    vec = seq_bogo(vec);
    // vec = omp_bogo(vec); // Falta programar CERTO
    // vec = cuda_bogo(vec);  // Nem comecei ainda


    for(auto i: vec) cout << i << " ";
    cout << endl;
    
    return 0;
}
