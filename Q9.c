#include<stdio.h>

int main() {
    char product[50];
    int qty;
    float price;

    printf("Enter product name: ");
    scanf("%s", product);

    printf("Enter quantity: ");
    scanf("%d", &qty);

    printf("Enter price: ");
    scanf("%f", &price);

    printf("Product Name: %s\n", product);
    printf("Quantity: %d\n", qty);
    printf("Price: %.2f\n", price);

    return 0;
}
