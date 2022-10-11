all: lista.c lista.h main.c
    gcc -o main main.c lista.c
    
run: main
    ./main
