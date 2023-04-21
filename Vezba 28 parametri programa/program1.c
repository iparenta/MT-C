#include <stdio.h>


void main(int argc, char** argv){
    FILE *in;
    FILE *out;
    unsigned char c;
    int brojac = 0;

    if(argc != 3){
        printf("Program zahteva dva argumenta, npr: ulaz.txt izlaz.txt\n");
        return;
    }

    in = fopen(argv[1], "r");
    if(in == NULL){
        printf("Ulazna datoteka ne postoi ili ne moze da se otvori!\n");
        return;
    }

    out = fopen(argv[2], "w");
    if (out == NULL){
        printf("Izlazna datoteka ne moze da bude otvorena!\n");
        return;
    }

    while (!feof(in)){
        c = fgetc(in);

        fprintf(out, "%02X ", c & 0xFF);// 0 da bi bilo 01, 02 itd
        brojac++;

        if (brojac % 16 == 0){
            fprintf(out, "\n");
        }

    }
    fclose(in);
    fclose(out);
}
