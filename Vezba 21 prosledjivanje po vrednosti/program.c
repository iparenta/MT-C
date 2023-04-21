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
    s.kolicina = 100;//ne menja nista jer je prosledjivanje zavrseno sa zavrsentkom kopije dok traje funkcija
}


void main(){
    Stavka s1, s2;

    strcpy(s1.ime, "Tastatura MK3401-MKK1");
    s1.cena = 1200;
    s1.kolicina = 3;

    strcpy(s2.ime, "Kokice slane (na 100g)");
    s2.cena = 45.65;
    s2.kolicina = 2.3;

    stampajStavku(s1);
    stampajStavku(s2);

    printf("%12.2f \n", s1.kolicina);// vrednost nije promenjena jer se prosledjuje po vrednosti

}
