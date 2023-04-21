#include <stdio.h>
#include <string.h>


//void ukloniNoviRed(char *niz){
//    niz[strlen(niz)-1]= '\0';
//}  OVO JE OPCIJA DVA i samo ubacujemo umesto  ime[strlen(ime) - 1] = '\0' ---> uklniNoviRed(ime);

void main(){
    char ime[50];
    char prezime[50];

    printf("Unesite svoje ime: ");
    fgets(ime, sizeof(ime), stdin);//fgets hvata sve, dok scanf samo do prve beline, ali ima problem sa novim redom koji se ispravlja kao ovo ispod
    ime[strlen(ime) - 1] = '\0';//strleb iz string.h racuna duzinu i onda zadnja stavka (novi red u sledecem koraku prelazi u kraj tj \0)
    //Uklanjanje novog reda sa kraja!

    printf("Unesite svoje prezime: ");
    fgets(prezime, sizeof(prezime), stdin);
    prezime[strlen(prezime) - 1] = '\0';
    //Uklanjanje novog reda sa kraja!

    if(strlen(ime) == 0 || strlen(prezime) == 0){
        printf("Ime ili prezime nisu ispravno uneti!\n");
    }else{

    printf("Vase ime i prezime je: %s %s.\n", ime, prezime);
    }

}
