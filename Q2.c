#include <stdio.h>

int main(){
    int tnumber,reversed,temp;
    reversed=0;
    printf("Enter your Ticket Number: ");
    scanf("%i",&tnumber);
    while (tnumber!=0){
        temp=tnumber%10;
        tnumber/=10;
        reversed=(reversed*10)+temp;
    }
    printf("Your Ticket Reversed is %i\n",reversed);

    return 0;
}