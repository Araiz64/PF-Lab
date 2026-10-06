#include <stdio.h>



int main() {
    int pin, security,sum;
    security = 1;
    while (security) {
        printf("Enter your pin: ");
        scanf("%d", &pin);
        if (pin < 1000 || pin > 9999) {
            printf("Invalid Pin Try Again\n");
            continue;
        }
        int temp = pin;
        int sum = 0;
        for (int i =0;i<4;i++){
            sum += temp%10;
            temp /= 10;

        }
        if (sum>10){
            printf("Strong PIN set Successfully\n");
            security=0;
        }
        else
            printf("Weak Pin Try Again\n");
    }
    return 0;
}