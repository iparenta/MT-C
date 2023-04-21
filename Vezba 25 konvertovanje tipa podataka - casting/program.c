#include <stdio.h>

void main(){
    long broj;
    char znak1, znak2, znak3, znak4;

    printf("Unesite broj: ");
    scanf("%ld", &broj);

    znak4 = (char) (broj & 0x000000FF); //2 nule 1 bajt i one budu 0, FF taj bajt ocitava (& sve gde je i gore i dole 1 ostaje 1, a gde je bar jedno 0 ostaje 0)
    znak3 = (char) ((broj & 0x0000FF00) >> 8); // mora i siftovanje u desno za 8 bitova da bi ga ocitalo
    znak2 = (char) ((broj & 0x00FF0000) >> 16);
    znak1 = (char) ((broj & 0xFF000000) >> 24);

    printf("%c%c%c%c \n", znak1, znak2, znak3, znak4);
}
