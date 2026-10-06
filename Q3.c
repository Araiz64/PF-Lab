#include <stdio.h>

int main(){
    int present = 0, absent = 0;
    int status;
    for (int i=0;i<15;i++){
        printf("Enter 1 for present and 0 for Absent: ");
        scanf("%i",&status);
        if (status)
            present+=1;
        else
            absent+=1;
        printf("Enter 1 for present and 0 for Absent: ");
        scanf("%i",&status);
        if (status)
            present+=1;
        else
            absent+=1;
    }
    printf("The Students present are %i and the absenties are %i\n",present,absent);



    return 0;
}