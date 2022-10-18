CC = gcc
CFLAGS = -Wall                                 # -Wall: Enables recommended compiler warnings
OBJECTS = main.o

run: main
	./main

all: main

main: main.o
	$(CC) -o main main.o $(CFLAGS)

main.o: main.c
	$(CC) -c main.c $(CFLAGS)

clear: 
	rm $(OBJECTS)
