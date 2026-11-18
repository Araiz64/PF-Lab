#include <stdio.h>
#include <string.h>

int main() {
    char email[100];
    char domain[100];
    char *ptr;

    printf("Enter employee email address: ");
    scanf("%s", email);

    ptr = strchr(email, '@');

    if (ptr == NULL) {
        printf("Invalid Email Format\n");
    } else {
        strcpy(domain, ptr + 1);
        printf("Extracted Domain: %s\n", domain);
    }

    return 0;
}
