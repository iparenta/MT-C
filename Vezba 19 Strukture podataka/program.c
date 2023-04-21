#include <stdio.h>
#include <string.h>


void main(){
    char imeGrada[100];
    char dopunjenoImeGrada[150];
    char tajnoMesto[50];
    char unos[50];
    char *str;

    printf("Unesite ime grada u kojem ste rodjeni: ");
    gets(imeGrada);

    strcpy(dopunjenoImeGrada, imeGrada);//kopiranje
    strcat(dopunjenoImeGrada, "ic");//dopuna
    printf("Ime mesta grada u kojem ste rodjeni je: %s?\n", dopunjenoImeGrada);

    strcpy(tajnoMesto, "NEGOTIN");
    while (1){
        printf("Tajno mesto ima %u slova. Kako se ono zove?", strlen(tajnoMesto));//duzina stringa
        gets(unos);
        str = strupr(unos);//povecavanje svih slova
        if(strcmp(tajnoMesto, str) == 0){//poredjenje je moglo i alternativno strcmpi koji nije osetljiv na velika i mala slova
            printf("Pogodak!\n");
            break;
        }
    }

    str = strlwr(imeGrada);//konvertovan je u mala slova da bi se podudarilo sigurno
    if (strstr(str, "grad") != 0){//trazenje manjeg strigna u postojecem
        printf("U nazivu grada u kojem ste rodjeni postoji deo \"grad\".\n");
    }else{
        printf("U nazivu grada u kojem ste rodjeni ne postoji deo \"grad\".\n");
    }
}
