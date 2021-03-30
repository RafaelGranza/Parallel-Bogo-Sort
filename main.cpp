#include <bits/stdc++.h>
#include "src/seq_bogo.cpp"
#include "src/omp_bogo.cpp"
#include "src/mpi_bogo.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
    // vector<int> vec = {11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0}; // Seq: ~ 2m 00s | OMP: ~ 7,46s | MPI: ~ 1m
    vector<int> vec = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0}; // Seq: ~ 3s | OMP: ~  2,3s | MPI: ~ 3,6s
    // vector<int> vec = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0}; // Seq: ~ 0,75s | OMP: ~ 0,35s | MPI: ~ 3s
    // vector<int> vec = {7, 6, 5, 4, 3, 2, 1, 0}; // Seq: ~ 0,2s | OMP: ~ 0,04s
    // vector<int> vec = {5, 4, 3, 2, 1, 0}; // Seq: 0,01s | OMP: 0,1s
    
    // vec = seq_bogo(vec); // PRONTO
    // vec = omp_bogo(vec, 4); // PRONTO
    MPI_Init(NULL, NULL);
    vec = mpi_bogo(vec);  // PRONTO
    MPI_Finalize();
    if(is_ordered(vec)){
        for(auto i: vec) cout << i << " ";
        cout << endl;
    } 

    return 0;   
}
