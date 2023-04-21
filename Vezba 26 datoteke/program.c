#include <stdio.h>
#include <string.h>

typedef struct {
    char naslov[100];
    char autor[100];
    char izdavac[100];
    short godinu;
    short brojStrana;
}Knjiga;

void main(){
    Knjiga k;
    FILE *f;
    strcpy(k.naslov, "Put u Indiju");
    strcpy(k.autor, "Edvard Morgan Foster");
    strcpy(k.izdavac, "Laguna, Beograd");
    k.godinu = 2019;
    k.brojStrana = 364;

    f = fopen("put-u-indiju.book", "wb");//write binary
    fwrite(&k, sizeof(k), 1, f);
    fclose(f);


}
