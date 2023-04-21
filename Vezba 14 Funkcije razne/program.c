#include <stdio.h>

void prikaziPorukeDobrodoslice(){ // F-ja koja ne uzima argument i ne vraca vrednost
    printf("Dobro nam dosli!\n");
    printf("Ovaj program konvertuje temperaturu iz *C u *F.\n");
    printf("Ispratite upustva za rad programa.\n");

}

float ucitajTemperaturuOdKorisnika(){ // F-ja koja ne uzima argument i vraca vrednost
    float temperatura;
    printf("Unesite temperaturu u *C: ");
    scanf("%f", &temperatura);
    return temperatura;

}

float konvertujTempCUTempF(float c){ // F-ja koja uzima argument i vraca vrednost
    return c * 1.8 +32;

}

void prikaziTemperaturu(float f) {
    printf("Temperatura je %.2f*F\n", f); // F-ja koja uzima argument i ne vraca vrednost

}

void main(){

    //float tempC, tempF;
    //prikaziPorukeDobrodoslice();
    //tempC = ucitajTemperaturuOdKorisnika();
    //tempF = konvertujTempCUTempF(tempC);
    //prikaziTemperaturu(tempF);

    prikaziPorukeDobrodoslice(); //Drugi nacin
    prikaziTemperaturu(
                        konvertujTempCUTempF(
                        ucitajTemperaturuOdKorisnika()
                        )
            );
}
