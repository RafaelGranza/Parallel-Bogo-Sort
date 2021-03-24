all: tudo

tudo:
	-g++ -c src/seq_bogo.cpp
	-mkdir -p .compiled
	-mv *.o .compiled/
	-g++ main.cpp -o main

.PHONY: clean

clean:
	-rm -f -r .compiled


