# include <stdio.h>

void main (){

    int godina;
    unsigned int razred;
    float cena;
    double plata;
    char simbol;

    printf("Unesite godinu rodjenja: ");
    scanf("%d", &godina); // dekadni zapis

    printf("Unesite koje je minimalni potrebni razred: ");
    scanf("%ud", &razred); // unnasigned integer tip podataka

    printf("Koja je cena proizvoda? ");
    scanf("%f", &cena); // za float tip podataka

    printf("Koja je prosecna plata zaposlenog? ");
    scanf("%lf", &plata); // long float za double tip podataka

    printf("Unesite jedan spejcijalni simbol: ");
    scanf(" %c", &simbol);// razmak ispred %c kulira tj. kupi sve beline koje su ostale od ranije zbog proslog entera


    printf("--------------------------\n");
    printf("Godina rodjenja je %d.\n", godina);
    printf("Potrebno je da ste zavrsili %u. razred!\n", razred);
    printf("Cena je %.4f EUR. \n", cena);
    printf("Plata zaposlenog je %.2f EUR.\n", plata);
    printf("Specijalni simbol je %c.\n", simbol);


}
