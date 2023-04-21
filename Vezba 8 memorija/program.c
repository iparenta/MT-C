#include <stdio.h>

int main(){

    int godina;
    char slovo;
    unsigned long brmol;
    double osnovica;

    godina = -27;
    printf("P. godina - adresa: %p, sirina: %lu\n", &godina, sizeof(godina));
    godina = 2020;
    printf("P. godina - adresa: %p, sirina: %lu\n", &godina, sizeof(godina));

    slovo = '\n';
    printf("P. slovo - adresa: %p, sirina: %lu\n", &slovo, sizeof(slovo));
    godina = 2020;
    printf("P. slovo - adresa: %p, sirina: %lu\n", &slovo, sizeof(slovo));

    brmol = 12;
    printf("P. brmol - adresa: %p, sirina: %lu\n", &brmol, sizeof(brmol));
    godina = 354605604400;
    printf("P. brmol - adresa: %p, sirina: %lu\n", &brmol, sizeof(brmol));

    osnovica = 502,45;
    printf("P. osnovica - adresa: %p, sirina: %lu\n", &osnovica, sizeof(osnovica));
    godina = 790,43;
    printf("P. osnovica - adresa: %p, sirina: %lu\n", &osnovica, sizeof(osnovica));

}
