#include <stdio.h>
#include <stdlib.h>


void main(){
    int i;
    int brojVrednosti;
    int *vrednosti;

    printf("Koliko vrednosti zelite da unesete: ");
    scanf("%d", &brojVrednosti);

    vrednosti = malloc(sizeof(int) * brojVrednosti);

    for(i=0; i<brojVrednosti; i++){
        printf("Unesite %d. broj: ", i+1);
        scanf("%d", &vrednosti[i]);
    }

    printf("Slova na tim pozicijama u alfabetu su: ");
    for(i=0; i<brojVrednosti; i++){
        printf("%c", vrednosti[i] + 64);// U ASCII tabeli od 65 krecu slova alfabeta
    }
    printf("\n");
    ;
    free(vrednosti);

}
