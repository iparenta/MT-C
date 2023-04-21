#include <stdio.h>

void show(int r, int c, int (*m)[c]){//pravimo pokazivac koji se zove m koji pokazuje na niz od c elemenata
    int y, x;

    for(y = 0; y < r; y++){
        for(x = 0; x <c; x++){
            printf("%5d ", m[y][x]);
        }

        printf("\n");
    }
}

void main(){
    int a[3][4];

    //1.red
    a[0][0] = 3;
    a[0][1] = 25;
    a[0][2] = 15;
    a[0][3] = 21;

    //2.red
    a[1][0] = 1;
    a[1][1] = 10;
    a[1][2] = 25;
    a[1][3] = 2;

    //3.red
    a[2][0] = 7;
    a[2][1] = 42;
    a[2][2] = 88;
    a[2][3] = -3;

    show(3, 4, a);// moze samo a jer radimo sa nizom vrednosti
}
