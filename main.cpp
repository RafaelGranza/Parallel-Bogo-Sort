#include <bits/stdc++.h>
#include "src/seq_bogo.cpp"
#include "src/omp_bogo.cpp"
#include "src/mpi_bogo.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> vec = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    
    // vec = seq_bogo(vec); 
    
    vec = omp_bogo(vec, 4);
    
    // MPI_Init(NULL, NULL);
    // vec = mpi_bogo(vec);
    // MPI_Finalize();

    if(is_ordered(vec)){
        for(auto i: vec) cout << i << " ";
        cout << endl;
    } 

    return 0;   
}
