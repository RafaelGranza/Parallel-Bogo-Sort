#include <bits/stdc++.h>
#include "src/seq_bogo.cpp"
#include "src/omp_bogo.cpp"
#include "src/mpi_bogo.cpp"
#include <chrono>


using namespace std::chrono;
using namespace std;

int main(int argc, char const *argv[])
{
    int max_size = 11;
    int it = 100;

    double time = 0;
    for(int size = 1; size <= max_size; size++){
        for(int i = 1; i<=it; ++i ){    
            vector<int> vec;
            for(int j = size-1; j>=0; --j )
                vec.push_back(j); 
        
            auto start = high_resolution_clock::now();
            
            vec = seq_bogo(vec, i); 

            auto stop = high_resolution_clock::now();
            auto duration = duration_cast<milliseconds>(stop - start);
            time += duration.count();
            // cout << time/(i+1) << endl;
        }
        cout << time/it  << " ";
    }
    cout << endl;

    time = 0;
    for(int size = 1; size <= max_size; size++){
       for(int i = 1; i<=it; ++i ){
            vector<int> vec;
            for(int j = size-1; j>=0; --j )
                vec.push_back(j); 
        
            auto start = high_resolution_clock::now();
            
            vec = omp_bogo(vec, 4, i);

            auto stop = high_resolution_clock::now();
            auto duration = duration_cast<milliseconds>(stop - start);
            time += duration.count();
            // cout << time/(i+1) << endl;
        }
        cout << time/it  << " ";
    }
    cout << endl;
    
    return 0;   
}
