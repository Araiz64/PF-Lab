#include <stdio.h>

int main() {
    
    char selection[10];
    printf("Enter the selection\nAnimal\nVehicle\nFood\nHuman\n");
    scanf("%9s", selection);

    switch (selection[0]) {
        case 'a':
        case 'A':
            printf("Enter the selection\nCat\nDog\nBird\n");
            scanf("%9s", selection);
            break;
        case 'v':
        case 'V':
            printf("Enter the selection\nCar\nBus\nBike\n");
            scanf("%9s", selection);
            break;
        case 'f':
        case 'F':
            printf("Enter the selection\nPizza\nBurger\nBiryani\n");
            scanf("%9s", selection);
            break;
        case 'h':    
        case 'H':
            printf("Enter the selection\nMale\nFemale\nhild\n");
            scanf("%9s", selection);
            break;
        default:
            printf("Invalid selection\n");
    }
    










    return 0;
}