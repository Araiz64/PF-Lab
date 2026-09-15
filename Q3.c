#include <stdio.h>

int main() {
    int total, missing, duplicate;
    float missingPercent, duplicatePercent;

    printf("Enter total records: ");
    scanf("%d", &total);

    printf("Enter missing records: ");
    scanf("%d", &missing);

    printf("Enter duplicate records: ");
    scanf("%d", &duplicate);

    if (total <= 0) {
        printf("Invalid Dataset\n");
        return 0;
    }

    missingPercent = (missing * 100.0) / total;
    duplicatePercent = (duplicate * 100.0) / total;

    if (missingPercent > 30) {
        printf("Poor Quality Dataset\n");
    }
    else if (duplicatePercent > 20) {
        printf("Dataset Requires Cleaning\n");
    }
    else {
        printf("Dataset Ready for Training\n");
    }

    return 0;
}