#include <stdio.h>

int main() {

    int value,v,t,tr,d;
    v=t=tr=d=0;
    printf("Enter the value for premissions (between 0 and 15): \n");
    scanf("%i", &value);
    
    if (value & 1)
        v=1;
    if (value & 2)
        t=1;
    if (value & 4)
        tr=1;
    if (value & 8)
        d=1;

    printf("The allowed permissions are:\n");
    if (v) printf("Viewing\n");
    if (t) printf("Training\n");
    if (tr) printf("Testing\n");
    if (d) printf("Deployment\n");
        
    if ((t)&&(d))
        printf("Super Level User\n");
    
    return 0;
}