# Parallel Bogo Sort
Bogo Sort implemented in:
* Sequencial
* OpenMP
* OpenMPI

## Sequencial and OpenMP

### To run:
```bash
$ make
$ ./main
```

### To test time:
```bash
$ make
$ ./test_time size rep op
```


### Só pro Menderson:
```bash
$ make
$ ./test_all > out
```

## OpenMPI

### To run:
```bash
$ make
$ mpirun -np 4./main
```

### To test time:
```bash
$ make
$ mpirun -np 4./test_time size rep op
```