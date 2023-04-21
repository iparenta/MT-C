#include <stdio.h>

#define MAX_PRAVOUGONIKA 10

typedef struct {
    double a;
    double b;
}Pravougaonik;

void main(){
    int i;
    Pravougaonik pravougaonici [MAX_PRAVOUGONIKA];

    printf("Unesite podatke za %d pravougaonika.\n", MAX_PRAVOUGONIKA);

    for(i=0; i<MAX_PRAVOUGONIKA; i++){
        printf("Unesite sirinu i visinu %d.pravougaonika: ", i+1);
        scanf("%lf%lf", &(pravougaonici[i].a), &pravougaonici[i].b);// zagarada prvi pravougaonici sam oda bude jasnije cija adresa se trazi
    }
    printf("Povrsine tih pravougaonika su:\n");
    for (i=0; i<MAX_PRAVOUGONIKA; i++){
        printf("%2d. %10.2f\n", i+1, pravougaonici[i].a * pravougaonici[i].b);
    }
}
