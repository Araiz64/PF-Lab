#include <stdio.h>

int main(){
    int shifts[4][3];
    int newrow[3];
    int idx;
    printf("Enter the 3x3 production data:\n");
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            printf("Row %i Column %i: ",i,j);
            scanf("%i",&shifts[i][j]);
        }
    }
    printf("Enter the Row Index for insertion (0 to 3): ");
    scanf("%i",&idx);
    if (idx<0||idx>3){
        printf("Invalid Index\n");
        return 0;
    }
    printf("Enter the 3 new values:\n");
    for (int j=0;j<3;j++){
        scanf("%i",&newrow[j]);
    }
    for (int i=3;i>idx;i--){
        for (int j=0;j<3;j++){
            shifts[i][j]=shifts[i-1][j];
        }
    }
    for (int j=0;j<3;j++){
        shifts[idx][j]=newrow[j];
    }
    printf("\nThe Updated Matrix is:\n");
    for (int i=0;i<4;i++){
        for (int j=0;j<3;j++){
            printf("%i\t",shifts[i][j]);
        }
        printf("\n");
    }



    return 0;
}
