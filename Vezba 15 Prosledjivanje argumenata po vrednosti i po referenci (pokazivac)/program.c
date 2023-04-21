#include <stdio.h>

//prosledjivanje po referenci
void popuniDimenzijeKvadra(float *a, float *b, float *c){
    printf("Unesite sirinu kvadra: ");
    scanf("%f", a);
    printf("Unesite duzinu kvadra: ");
    scanf("%f", b);
    printf("Unesite visinu kvadra: ");
    scanf("%f", c);
}

//prosledjivanje po referenci
void izracunajIPopuniObimIPovrsinu(float a, float b, float c, float *o, float *p){
    *p = a * b * c;
    *o = 2 * (a + b + c);


}

void main(){
    float a, b, c, o, p;

    popuniDimenzijeKvadra(&a, &b, &c);
    izracunajIPopuniObimIPovrsinu(a, b, c, &o, &p);

    printf("Povrsina je %.2f, a obim je %.2f\n", p, o);
}
