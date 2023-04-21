#include <stdio.h>


void main(){
    double brojevi[10];
    double suma = 0;
    double srVr;

    for(int indeks = 0; indeks < 10; indeks++){
        printf("Unesite %d. broj: ", indeks +1);
        scanf("%lf", &brojevi[indeks]);
    }
    //printf("Peti element je %f.\n", brojevi[4]);
    //printf("Deveti element je %f.\n", brojevi[8]);

    /for (int i = 0; i < 10; i++){
        suma += brojevi[i];

    }
    srVr = suma / 10;
    printf("Srednja vrednost je %f.\n", srVr);
}
