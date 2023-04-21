# include <stdio.h>

#define AUTOR "I P"

void main (){

    int godina =2020;
    unsigned int razred = 4;
    float cena = 1654.9;
    double plata = 987.123873;
    char simbol = 'M';
    const double STOPA_POREZA = 0.2;

    printf("Ovaj video je sniman %d. godine.\n", godina);
    printf("Potrebno je da ste zavrsili %u. razred!\n", razred);
    printf("Cena je %.4f EUR. \n", cena);
    printf("Plata zaposlenog je %.2f EUR.\n", plata);
    printf("Specijalni simbol je %c.\n", simbol);
    printf("Porez na cenu je %.2f EUR.\n", cena * STOPA_POREZA);
    printf("Porez je %.2f%%\n", STOPA_POREZA * 100);
    printf("Ime autora je \"%s\".\n", AUTOR);


}
