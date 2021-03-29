all: tudo

tudo:
	-g++ -c src/seq_bogo.cpp 
	-g++ -c src/omp_bogo.cpp -fopenmp
	-mpic++ -c src/mpi_bogo.cpp 
	-mkdir -p .compiled
	-mv *.o .compiled/
	-mpic++ -o main -fopenmp main.cpp

.PHONY: clean

clean:
	-rm -f -r .compiled


