#include<stdio.h>

int main() {
    char fullName[50];

    printf("Enter your full name: ");
    fgets(fullName, 50, stdin);

    printf("Hello,\n%s", fullName);

    return 0;
}
