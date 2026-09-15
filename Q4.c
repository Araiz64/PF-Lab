#include <stdio.h>

int main() {
    float accuracy;
    int latency, approved;

    printf("Enter model accuracy: ");
    scanf("%f", &accuracy);

    printf("Enter prediction latency: ");
    scanf("%d", &latency);

    printf("Enter approval status (1 or 0): ");
    scanf("%d", &approved);

    if (accuracy < 90) {
        printf("Cannot deploy - Accuracy too low\n");
    }
    else if (latency > 100) {
        printf("Cannot deploy - Latency too high\n");
    }
    else if (approved == 0) {
        printf("Cannot deploy - Model not approved\n");
    }
    else {
        printf("Model can be deployed\n");
    }

    return 0;
}