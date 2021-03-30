# Parallel Bogo Sort
Bogo Sort implemented in:
* Sequencial
* OpenMP
* OpenMPI


### To run (Sequencial or OpenMP):
```bash
$ make
$ ./main
```

### To run (OpenMPI):
```bash
$ make
$ mpirun -np 4./main
```

### To test time (Sequencial or OpenMP):
```bash
$ ./test_time size rep op
```