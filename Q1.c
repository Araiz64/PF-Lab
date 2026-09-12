#include<stdio.h>

int main() {
    char name[50], city[50];
    int age;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your city: ");
    scanf("%s", city);

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("City: %s\n", city);

    return 0;
}
