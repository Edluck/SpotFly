maker:
    @gcc -c .c
    @gcc -o main.o

run:
    @./main

clean:
    @rm -rf *.o main

val:
    @valgrind ./main