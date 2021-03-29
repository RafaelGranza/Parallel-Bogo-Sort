#include <bits/stdc++.h>
#include "src/seq_bogo.cpp"
#include "src/omp_bogo.cpp"
#include "src/mpi_bogo.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
    // vector<int> vec = {11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0}; // Seq: ~ 2m 00s | OMP: ~ 7,46s
    // vector<int> vec = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0}; // Seq: ~ 18s | OMP: ~  2,3s
    vector<int> vec = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0}; // Seq: ~ 0,75s | OMP: ~ 0,35s
    // vector<int> vec = {7, 6, 5, 4, 3, 2, 1, 0}; // Seq: ~ 0,2s | OMP: ~ 0,04s
    // vector<int> vec = {5, 4, 3, 2, 1, 0}; // Seq: 0,01s | OMP: 0,1s
    
    vec = seq_bogo(vec); // PRONTO
    // vec = omp_bogo(vec, 4); // PRONTO    
    // vec = mpi_bogo(vec);  // TEM QUE FAZER

    for(auto i: vec) cout << i << " ";
    cout << endl;

    return 0;   
}
