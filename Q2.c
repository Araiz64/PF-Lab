#include <stdio.h>

int main() {
    int age, income, credit_score, status;
    printf("Enter the age of the applicant:  ");
    scanf("%i\n", &age);
    printf("Enter the monthly income of the applicant:  ");
    scanf("%i\n", &income);
    printf("Enter the credit score of the applicant:  ");
    scanf("%f\n", &credit_score);
    printf("Enter if the applicant has exsisting loan:  ");
    scanf("%i\n", &status);

    if ((age >= 21) && (income >= 100000) && (credit_score >= 750) && (status == 0)) 
        printf("High Approval Chance\n");
    
    else if ((age >= 21) && (income >= 75000) && (credit_score >= 650) && (status == 1))
        printf("The applicant has to be manually reviwed\n");
    else if ((age >= 21) && (income >= 50000) && (credit_score >= 600) && (status == 1))
        printf("The Applicant is possible Eligible \n");
    else
        printf("The Applicant is not Eligible for loan \n");






    return 0;
}