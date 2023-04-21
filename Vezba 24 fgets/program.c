#include <stdio.h>
#include <string.h>

void main(){
    char punoIme[200];

    printf("Unesite svoje puno ime: ");
    fgets(punoIme, sizeof(punoIme)-1, stdin);
    punoIme[strlen(punoIme)-1] = '\0';// dodajemo ovo da ne bi iscitavalo novi red i pisalo u njemu tacku

    printf("Vase ime je %s. \n", punoIme);

}
