#include <stdio.h>

// Pokazivac * pokazuje uvek samo na prvi podatak u nizu, zato se uvek u [] pise broj elemenata
void popuniNiz(double *niz,int brojElemenata){
    for (int i = 0; i < brojElemenata; i++){
        printf("Unesite %d. element niza: ", i + 1);
        scanf("%lf", &niz[i]);
    }
}

void prikaziNiz(double *niz, int brojElemenata) {
    for (int i = 0; i < brojElemenata; i++){
            printf("%3d. element = %.4f\n", i+ 1, niz[i]);

    }
}


void main(){
    double niz[5];

    popuniNiz(niz, 5);
    prikaziNiz(niz, 5);
}
