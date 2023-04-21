//Lokalni opseg vazenja vidljivosti


#include <stdio.h>

void test(int podatak){
    printf("test: Podatak je %d.\n", podatak);
    podatak = 42;
    printf("test: Podatak je %d.\n", podatak);
}

void main(){
    int podatak = 10;
    printf("main: Podatak je %d.\n", podatak);
    test(podatak);
    printf("main: Podatak je %d.\n", podatak);


}
