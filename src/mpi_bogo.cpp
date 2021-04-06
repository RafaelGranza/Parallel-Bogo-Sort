#include <bits/stdc++.h>
#include "tools.cpp"
#include <mpi.h>

using namespace std;

vector<int> mpi_bogo(vector<int> vec, int s = 0)
{

    int rank, size, tag =0, flag = 0, count = 0;
    char msg[1];
    MPI_Request status;
    
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size); 

    // mt19937 engine(rank* (rank+1)); // Fast Seed
    mt19937 engine(time(0)* (rank+1) + s); // Random Seed

    while(not is_ordered(vec) and not flag)
    {
        next(vec, engine);
        ++count;
        if(count == 200)
        {
            for (int i = 0; i < size && not flag; ++i)
            {
                MPI_Iprobe(i,tag, MPI_COMM_WORLD, &flag, MPI_STATUS_IGNORE);
            }
            count = 0;
        }
    }

    for (int i = 0; i < size; ++i)
    {
        MPI_Send(msg,1,MPI_CHAR,i,tag, MPI_COMM_WORLD);
    }
    
    return vec;
}