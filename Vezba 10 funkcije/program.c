#include <stdio.h>

// Deklaracija funkcije (vraca double i uzima jedan parametar double tipa):
double temp_F_u_C(double temp_F);

// Deklaraciiju i definiciju main funkcije ( ne vraca i ne uzima nista):
void main(){
    double izmerena_temperatura_u_F = 94.12; //F
    double konvertovano_u_C;


    //Poziv funkcije:
    konvertovano_u_C = temp_F_u_C(izmerena_temperatura_u_F);

    //Ispis rezultata:
    printf("Ta temperatura je %.2f *C.\n", konvertovano_u_C);


}

//definicija funkcije temp_F_u_C:
double temp_F_u_C(double temp_F){

    //double temp_C;
    //temp_C = (temp_F - 32) / 1.8;
    //return temp_C;

    return (temp_F - 32) / 1.8;

}
