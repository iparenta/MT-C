#include <stdio.h>

int main(){

    int broj;

    while(1){
    printf("Pogodotie tajni broj: ");
    scanf("%d", &broj);

    if (broj == 54) {
        printf("Pogodak!\n");
        break;
    }
    }

    printf("Kraj programa!\n");

}

