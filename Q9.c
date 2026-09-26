#include <stdio.h>
#include <math.h>

int main(){
    int choice;
    double t1,t2;
    printf("1. Square Root\n2. Power Raise\n3. Absolute Value\n4. Floor\n5. Ceiling\nEnter your choice: ");
    scanf("%i", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter a Number greater then 0\n");
        scanf("%lf", &t1);
        if (t1>0)
            printf("The answer to Sqaure root is %lf\n", sqrt(t1));
        else
            printf("Invalid\n");
        break;
    case 2:
        printf("Enter a Base followed by Exponent\n");
        scanf("%lf %lf \n", &t1,&t2);
        printf("The answer Raised to the power is %lf\n", pow(t1,t2));
        break;
    case 3:
        printf("Enter a Number to return Absolute Value\n");
        scanf("%lf", &t1);
        printf("The Number in Absolute form is %lf\n",fabs(t1));
        break;
    case 4:
        printf("Enter a Number to Floor it\n");
        scanf("%lf", &t1);
        printf("The Number Floored is %lf\n",floor(t1));
        break;
    case 5:
        printf("Enter a Number to Ceil it\n");
        scanf("%lf", &t1);
        printf("The Number Ceiled is %lf\n",ceil(t1));
        break;
    default:
        printf("Invalid\n");
        break;
    }







    return 0;
}

