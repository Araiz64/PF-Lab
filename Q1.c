#include <stdio.h>

int main() {
    int pm, mm, am, attendence, average;

    printf("Enter the marks for Programming:  ");
    scanf("%d \n", &pm);

    printf("Enter the marks for Mathematics:  ");
    scanf("%d \n", &mm);

    printf("Enter the marks for AI:  ");
    scanf("%d \n", &am);

    printf("Enter the Attendance Percentage:  ");
    scanf("%d \n", &attendence);

    if ((pm >= 50) && (mm >= 50) && (am >= 50) && (attendence >= 75)) {
        average = (pm + mm + am)/300.0 *100;
    }
    else {
        printf("Student is not eligible\n");
    }
    
    if (average >= 80) 
        printf ("Excellent Result \n");
    else if (average >= 70 && average < 80)
        printf("Very Good Result \n");
    else if (average >= 60 && average < 70)
        printf("Good Result \n");
    else if (average >=50 && average < 60)
        printf("Satisfactory Result \n");
    else if (average < 50)
        printf ("Poor Result \n");
        
    return 0;
}