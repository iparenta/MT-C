//Lokalni opseg vazenja vidljivosti


#include <stdio.h>

void test(int podatak){
    int abc = 4;
    printf("test: Podatak je %d.\n", podatak);
    podatak = 42;
    printf("test: Podatak je %d.\n", podatak);

    printf("test: Vrednost je %d.\n", vrednost); // ne moze da se koristi iz mejna

void main(){
    int podatak = 10;
    int vrednost = 5;
    printf("main: Podatak je %d.\n", podatak);
    test(podatak);
    printf("main: Podatak je %d.\n", podatak);

    printf ("main : ABC je %d.\n", abc); // ne moze da se koristi iz testa


}

