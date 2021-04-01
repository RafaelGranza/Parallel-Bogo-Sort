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

## OpenMPI

### To run:
```bash
$ make
$ mpirun -np 4 ./main
```

### To test time:
```bash
$ make
$ mpirun -np 4 ./test_time size rep op
```

# Time Comparison:

![Comparison](https://i.imgur.com/zptWoSt.png)
![Comparison Log](https://i.imgur.com/RzZmcYL.png)
