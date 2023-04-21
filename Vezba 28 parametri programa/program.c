#include <stdio.h>


void main(int argc, char** argv){
    int i;


    printf("argc = %d\n", argc);

    printf("Pojedinacni argumenti su:\n");
    for(i=0; i<argc; i++){
        printf("Na indeksu %3d je: %s\n", i, argv[i]);
    }

}
