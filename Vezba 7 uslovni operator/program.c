#include <stdio.h>

int main(){

    unsigned char simbol;

    printf ("Unseti neku cifru od 0 do 9 i pritisnite ENTER: ");
    scanf (" %c", &simbol);

    printf ("Ovo %s cifra!\n", simbol >= '0' && simbol <= '9' ? "jeste" : "nije");



    // Odnosi se na cifre kao brojeve ne na velicinu od 0-9, slova i znakovi daju pogresno


}
