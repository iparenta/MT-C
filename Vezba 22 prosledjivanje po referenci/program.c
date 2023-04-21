#include <stdio.h>
#include <string.h>

typedef struct {
    char ime[40];
    double cena;
    double kolicina;
}Stavka;

void stampajStavku(Stavka s){
    printf(
           "%-40s %12.2f RSD x %12.2f = %12.2f RSD\n", // 40 mesta rezervisano...
           s.ime, s.cena, s.kolicina, (s.cena) * (s.kolicina));// mora u zagrade jer ne racune beline i bilo bi *s
    }

void popuniStavkuPrviNacin(Stavka *s, char *ime, double cena, double kolicina){
    strcpy(s->ime, ime);
    s->cena = cena;
    s->kolicina =kolicina;
}

void popuniStavkuDrugiNacin(Stavka *s, char *ime, double cena, double kolicina){
    strcpy((*s).ime, ime);// (*s) mora u zagradi jer bi bez toga bilo referenciranje pokazivaca
    (*s).cena = cena;
    (*s).kolicina = kolicina;

}
void main(){
    Stavka s1, s2;

    popuniStavkuPrviNacin(&s1, "Tastatura MK3401-MKK1", 1200, 3);// & oznacava adresu podatka

    popuniStavkuDrugiNacin(&s2, "Kokice slane (na 100g)", 45.65, 2.3);


    stampajStavku(s1);
    stampajStavku(s2);


}
