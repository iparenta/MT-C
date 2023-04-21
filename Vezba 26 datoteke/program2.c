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


    f = fopen("put-u-indiju.book", "rb");//read binary
    fread(&k, sizeof(k), 1, f);
    fclose(f);

    printf("%s, %s, %s. %d, %d\n", k.autor,k.naslov,k.izdavac,k.brojStrana);

}
