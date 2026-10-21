#include <stdio.h>

int main(){
    float sensor_data[3][4];
    int col;
    printf("Enter the Temperatures for 3 days and 4 sensors:\n");
    for (int r=0;r<3;r++){
        for (int c=0;c<4;c++){
            printf("Day %i Sensor %i: ",r,c);
            scanf("%f",&sensor_data[r][c]);
        }
    }
    printf("Enter the Column Index of the faulty sensor (0 to 3): ");
    scanf("%i",&col);
    if (col<0||col>3){
        printf("Invalid Column\n");
        return 0;
    }
    for (int r=0;r<3;r++){
        for (int c=col;c<3;c++){
            sensor_data[r][c]=sensor_data[r][c+1];
        }
    }
    printf("\nThe Updated Matrix is:\n");
    for (int r=0;r<3;r++){
        for (int c=0;c<3;c++){
            printf("%.2f\t",sensor_data[r][c]);
        }
        printf("\n");
    }



    return 0;
}
