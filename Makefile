CC=gcc
LIBSRC=libsieve
SRC=sieve_impl
FLAGS=-Wall -O1
all: $(SRC).o $(LIBSRC).o 
	gcc -g $(LIBSRC).o $(SRC).o -lm -o $(SRC).elf
$(LIBSRC).o: $(LIBSRC).c
	gcc -c -fPIC $(LIBSRC).c -o $(LIBSRC).o 
$(SRC).o: $(SRC).c
	gcc -c -fPIC $(SRC).c -o $(SRC).o
clean:
	rm -rf *.o
	rm -rf *.elf
