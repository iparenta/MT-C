#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(){
    int brojSlova;
    char *ime;

    printf("Koliko slova ima vase ime? ");
    scanf("%d", &brojSlova);

    ime = malloc(sizeof(char) * brojSlova);

    printf("Kako se zovete? ");
    scanf("%s", ime);

    ime = realloc(ime, sizeof(char) * (brojSlova + 20));
    strcat(ime, " uci programiranje!");

    printf("%s\n", ime);

    free(ime);
}
