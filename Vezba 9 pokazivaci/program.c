#include <stdio.h>

int main(){

    double plate[3]; //[0][1][2] tj. [504.12][490.97][783.09]
    double *p;

    p = &plate[0];
    printf("Trenutna adresa pokazivaca je %p.\n", p);
    *p = 504,12;

    p++; //p = p + 1; pomera za 8 bajtova jer je p tolike vrednosti
    printf("Trenutna adresa pokazivaca je %p.\n", p);
    *p = 490.97;

    p++;
    printf("Trenutna adresa pokazivaca je %p.\n", p);
    *p = 783.09;

    printf("Tri plate su: %.2f, %.2f. i %.2f.\n", plate[0], plate[1], plate[2]);



}
