#include <stdio.h>

int main() {
    float dataUsed, pricePerGB, basicCost, discountAmount, finalCost;
    float discountPercent;

    printf("Enter data used (GB): ");
    scanf("%f", &dataUsed);

    printf("Enter price per GB: ");
    scanf("%f", &pricePerGB);

    basicCost = dataUsed * pricePerGB;

    if (dataUsed < 50) {
        discountPercent = 0;
    }
    else if (dataUsed >= 50 && dataUsed < 100) {
        discountPercent = 5;
    }
    else if (dataUsed >= 100 && dataUsed < 200) {
        discountPercent = 10;
    }
    else {
        discountPercent = 15;
    }

    discountAmount = (basicCost * discountPercent) / 100;
    finalCost = basicCost - discountAmount;

    printf("Basic Cost: %.2f\n", basicCost);
    printf("Discount Amount: %.2f\n", discountAmount);
    printf("Final Cost: %.2f\n", finalCost);

    return 0;
}