#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char name[50];
    int accountNo;
    float amount;
    int len;
    FILE *fptr;

    printf("Enter Customer Name: ");
    fgets(name, 50, stdin);
    len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
    }

    printf("Enter Account Number: ");
    scanf("%d", &accountNo);

    printf("Enter Withdrawal Amount: ");
    scanf("%f", &amount);

    fptr = fopen("bank_log.txt", "a");
    if (fptr == NULL) {
        printf("Error!");
        exit(1);
    }

    fprintf(fptr, "%s %d %.2f\n", name, accountNo, amount);
    fclose(fptr);

    printf("Transaction saved successfully!\n");

    return 0;
}
