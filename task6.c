#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char username[50], password[50];
    char savedUser[50], savedPass[50];
    FILE *fptr;

    printf("Enter Username: ");
    scanf("%s", username);

    printf("Enter Password: ");
    scanf("%s", password);

    fptr = fopen("credentials.txt", "r");
    if (fptr == NULL) {
        printf("Error! opening file");
        exit(1);
    }

    fscanf(fptr, "%s %s", savedUser, savedPass);

    if (strcmp(username, savedUser) == 0 && strcmp(password, savedPass) == 0) {
        printf("Access Granted!\n");
    } else {
        printf("Access Denied!\n");
    }

    fclose(fptr);

    return 0;
}
