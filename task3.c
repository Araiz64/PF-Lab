#include <stdio.h>

struct Item {
    int id;
    char name[50];
    int quantity;
    float unitPrice;
};

int main() {
    struct Item items[5];
    float totalValue = 0;
    int searchId, found = 0;

    for (int i = 0; i < 5; i++) {
        printf("Enter details for Item %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &items[i].id);
        printf("Name: ");
        scanf("%s", items[i].name);
        printf("Quantity: ");
        scanf("%d", &items[i].quantity);
        printf("Unit Price: ");
        scanf("%f", &items[i].unitPrice);

        totalValue += items[i].quantity * items[i].unitPrice;
    }

    printf("\nTotal Warehouse Inventory Value: %.2f\n", totalValue);

    printf("\nEnter Item ID to search: ");
    scanf("%d", &searchId);

    for (int i = 0; i < 5; i++) {
        if (items[i].id == searchId) {
            printf("Item Found:\n");
            printf("ID: %d\n", items[i].id);
            printf("Name: %s\n", items[i].name);
            printf("Quantity: %d\n", items[i].quantity);
            printf("Unit Price: %.2f\n", items[i].unitPrice);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("Item with ID %d not found.\n", searchId);
    }

    return 0;
}
