#include <stdio.h>
#include <string.h>


// typedef struct koristimo kada ce se koristiti u vise delova programa, kada samo u lokalnom onda samo struct
typedef struct {
    char ime[100];
    double x, y;
    unsigned short energija;
} Igrac;

void main(){
    Igrac igrac1;

    strcpy(igrac1.ime, "Link");
    igrac1.x = 178.34;
    igrac1.y = 34.123;
    igrac1.energija = 250;

    printf(
           "%s je na koordinatama %.2f %.2f i nivo energije je %u\n",
           igrac1.ime,
           igrac1.x,
           igrac1.y,
           igrac1.energija
                      );

}
