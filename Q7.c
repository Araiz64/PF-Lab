#include <stdio.h>

int main(){

    int ct,rt;
    printf("Enter the Confidence Score for Prediction (Between 0 to 100) and Required Confidence Threshold (Between 0 to 100):\n");
    scanf("%i and %i",&ct,&rt);
    if (ct>=90)
        printf("Confidence Very High");
    else if (ct>=75)
        printf("Confidence High");
    else if (ct>=50)
        printf("Confidence Moderate");
    else if (ct>=75)
        printf("Confidence Low");
    else if ((ct>=50)&&(ct>=rt))
        printf("Accepted");
    else
        printf("Rejected");
        
    return 0;
}