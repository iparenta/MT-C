#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char naslov[100];
    char autor[100];
    short godina;
}Knjiga;

Knjiga* unosKnjige(){
    Knjiga *k = malloc(sizeof(Knjiga));

    printf("Unesite naslov knjige: ");
    fgets(k->naslov, 100, stdin);
    k->naslov[strlen(k->naslov) -1] = '\0';

    printf("Unesite ime autora: ");
    fgets(k->autor, 100, stdin);
    k->autor[strlen(k->autor) -1] = '\0';

    printf("Unesite godinu izdanja: ");
    scanf("%hd", &k->godina);

    return k;
}

void prikazKnjige(Knjiga *k){
    printf("%s, \"%s\". %hd\n", k->autor, k->naslov, k->godina);// sa pokazivacima ide -> umesto tacke
}

void main(){
   Knjiga *k;

   k = unosKnjige();
   prikazKnjige(k);

   free(k);

}
