#include <stdio.h>

int main(){
    char student_names[3][50];
    int marks[3][3];
    int sum;
    float avg;
    for (int i=0;i<3;i++){
        printf("Enter the Name of Student %i: ",i+1);
        scanf(" %[^\n]",student_names[i]);
        for (int j=0;j<3;j++){
            printf("Enter Mark %i: ",j+1);
            scanf("%i",&marks[i][j]);
        }
    }
    printf("\nStudent Report\n");
    for (int i=0;i<3;i++){
        sum=0;
        for (int j=0;j<3;j++){
            sum+=marks[i][j];
        }
        avg=sum/3.0;
        printf("%s has an Average of %.2f\n",student_names[i],avg);
    }



    return 0;
}
