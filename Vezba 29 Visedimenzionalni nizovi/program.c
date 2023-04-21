#include <stdio.h>


int main(){
    int matrix[4][3];//2d niz - matrica

    int suma = 0;
    int y, x;

    //1.red
    matrix[0][0] = 3;
    matrix[0][1] = 25;
    matrix[0][2] = 15;

    //2.red
    matrix[1][0] = 21;
    matrix[1][1] = 23;
    matrix[1][2] = 1;

    //3.red
    matrix[2][0] = -3;
    matrix[2][1] = 3;
    matrix[2][2] = -34;

    //4.red
    matrix[3][0] = -45;
    matrix[3][1] = -9;
    matrix[3][2] = 3;

    for(y=0; y<4; y++){

        for(x=0; x<3; x++){
            suma += matrix [y][x];
        }
    }

    printf("Suma vrednosti svih elemenata matrice je: %d.\n", suma);

    return 0;
}
