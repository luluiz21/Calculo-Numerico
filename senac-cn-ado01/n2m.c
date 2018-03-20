#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lib.c"



int main(int argc, char **argv) {
    char saida[100] ;
    long int numbase10 ;

    if(argc != 4) {
        printf("[uso] ./n2m <num> <baseN> <baseM>\n") ;
        return -1 ;
    }

    
    numbase10 = baseNtobase10(argv[1], atoi(argv[2])) ;
    base10tobaseM(saida, numbase10, atoi(argv[3])) ;

    puts(saida) ;

    return 0;
}