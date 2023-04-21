#include <stdio.h>
#include <stdlib.h>

typedef struct Cvor{
    int broj;
    double faktor;

    struct Cvor* sledeci;
}Cvor;

void main(){
    Cvor* koren = malloc(sizeof(Cvor));
    Cvor* trenutni = koren;

    trenutni->broj = 42;
    trenutni->faktor = 0.56;

    //Pravljenje liste
    while(trenutni->broj > 5){
        Cvor* novi = malloc(sizeof(Cvor));

        novi->broj = trenutni->broj * trenutni->faktor;
        novi->faktor = trenutni->faktor *0.87;

        trenutni->sledeci = novi;
        trenutni = novi;
    }

    //Prikaz liste
    trenutni = koren;

    do{
        printf("[ %d, %.2f] -> ", trenutni->broj, trenutni->faktor);//"Vrednost je: %d i faktor je %.2f\n"

        trenutni = trenutni->sledeci;
    }while(trenutni);

    printf("\n");
}
