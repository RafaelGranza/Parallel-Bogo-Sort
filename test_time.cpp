#include <bits/stdc++.h>
#include "src/seq_bogo.cpp"
#include "src/omp_bogo.cpp"
#include "src/mpi_bogo.cpp"
#include <chrono>


using namespace std::chrono;
using namespace std;

int main(int argc, char const *argv[])
{


    int size = atoi(argv[1]);
    int rep  = atoi(argv[2]);
    int op   = atoi(argv[3]);
    

    if(size + rep + op > 100000) return 0;

    double time = 0;
    MPI_Init(NULL, NULL);
    for(int i = 0; i<rep; ++i ){

        vector<int> vec;
        for(int j = size-1; j>=0; --j )
            vec.push_back(j); 
    
        auto start = high_resolution_clock::now();
        switch (op){
        case 0:
            vec = seq_bogo(vec, i); // PRONTO
            break;
        
        case 1:
            vec = omp_bogo(vec, 4, i); // PRONTO
            break;

        default:
            vec = mpi_bogo(vec, i);  // PRONTO
            break;
        }

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<milliseconds>(stop - start);
        time += duration.count();
        // cout << time/(i+1) << endl;
    }
    MPI_Finalize();
    cout << "AVG Time: " << time/rep  << "(ms)"<< endl;

    return 0;   
}
