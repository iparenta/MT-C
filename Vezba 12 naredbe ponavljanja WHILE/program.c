#include <stdio.h>

void printMenu(){
    printf("-----------------------------\n");
    printf("1 - Add new item\n");
    printf("2 - Edit existing item\n");
    printf("3 - Delete an item\n");
    printf("0 - Exit program\n");

}


int askForChoice(){
    int choice;
    printf("Enter your choice:");
    scanf("%d", &choice);
    return choice;
}


int getChoiceFromMenu(){
    int izbor = -1;

    while(izbor < 0 || izbor > 3){
        printMenu();
        izbor = askForChoice();
    }
    return izbor;
}




int main(){

    int izbor = getChoiceFromMenu();
    printf("Korisnik je izabrao opciju %d.\n", izbor);


}
