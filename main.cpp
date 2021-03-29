#include <bits/stdc++.h>
#include "src/seq_bogo.cpp"
#include "src/omp_bogo.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> vec = {11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0}; // Seq: ~ 1m 25s  OMP: ~ 1m 0s
    // vector<int> vec = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0}; // Seq: ~ 40s  OMP: ~ 1m 0s
    // vector<int> vec = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0}; // Seq: ~ 1,2s OMP:
    // vector<int> vec = {7, 6, 5, 4, 3, 2, 1, 0}; // Seq: ~ 1,2s OMP:
    // vector<int> vec = {5, 4, 3, 2, 1, 0}; // Seq: 0s
    
    // vec = seq_bogo(vec);
    vec = omp_bogo(vec, 10); // Falta deixar Rápido
    // vec = cuda_bogo(vec);  // Nem comecei ainda

    for(auto i: vec) cout << i << " ";
    cout << endl;

    return 0;
}
