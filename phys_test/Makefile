UNAME=$(shell uname)

CCFLAGS=-Wall -O3 -std=gnu99
CC=gcc

all: phys

phys: phystest_main.o physics.o ctest.h physics_test.o
	$(CC) $(LDFLAGS) phystest_main.o physics.o physics_test.o -o physics_test

remake: clean all

%.o: %.c ctest.h
	$(CC) $(CCFLAGS) -c -o $@ $<

clean:
	rm -f physics_test *.o
