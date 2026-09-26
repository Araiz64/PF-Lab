#include <stdio.h>

int main() {

    int cs, ut;
    printf("Enter the Confidence Score for recognition (0-100) and User Type (0-1) 1 for authorized and 0 for unauthorized:\n");
    scanf("%i and %i", &cs, &ut);

    if (cs>=80){
        if (ut=1)
            printf("Access Granted\n");
        else
            printf("Face Recognized\n");
        

    }
    else if ((cs>50)||(cs<=79)){

        if (ut=1)
            printf("Manual Verifcation Required\n");
        else
            printf("Access Denied\n");
    }
    else
        printf("Access Denied");





    return 0;
}