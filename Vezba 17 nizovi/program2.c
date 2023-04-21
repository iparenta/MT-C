#include <stdio.h>


void main(){
    double brojevi[5];
    double suma = 0;
    double srVr;
    int brojElemenata = sizeof(brojevi) / sizeof(double);

    //printf("Velicina u bajtovima je %d.\n", sizeof(brojevi));
    //printf("Broj elemenata niza je: %d.", sizeof(brojevi) / sizeof(double));

    for(int indeks = 0; indeks < brojElemenata; indeks++){
        printf("Unesite %d. broj: ", indeks +1);
        scanf("%lf", &brojevi[indeks]);
    }

    for (int i = 0; i < brojElemenata; i++){
        suma += brojevi[i];

    }
    srVr = suma / brojElemenata;
    printf("Srednja vrednost je %f.\n", srVr);
}



