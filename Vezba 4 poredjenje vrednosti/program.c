#include <stdio.h>

int main(){

    int a = 42;
    int b = 3;
    int c = -7;
    unsigned char d, e;

    d = a < b; // 42 < 3 -> F = 0
    e = b > c; // 3 > -7 -> T = 1

    printf ("Rezultat d je %d. \n", d);
    printf ("Rezultat e je %d. \n", e);


}
