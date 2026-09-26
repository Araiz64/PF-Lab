#include <stdio.h>

int main() {
    int pt;
    printf("1. Classification: Logistic Regression, Decision Tree, KNN\n2. Regression: Linear Regression, Polynomial Regression, SVR\n3. Clustering: K-Means, Hierarchical Clustering, DBSCAN\n4. Computer Vision: CNN, YOLO, R-CNN\nEnter option: ");
    scanf("%i",&pt);
    switch(pt){
        case 1:
            printf("Running Algo 1\n");
            break;
        case 2:
            printf("Running Algo 2\n");
            break;
        case 3:
            printf("Running Algo 3\n");
            break;
        case 4:
            printf("Running Algo 4\n");
            break;
        default:
            printf("Wrong Option\n");
            break;
    }

    return 0;
}