#include <stdio.h>

int main(){

    int broj;

    printf("Unesti broj koji je deljiv sa 13: ");
    scanf("%d", &broj);


    if (broj % 13 == 0){
        printf("Bravo!\n");

    }else {
        printf("Ovaj broj nije deljiv sa 13... -_-\n");
    }

}
