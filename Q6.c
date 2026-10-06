#include <stdio.h>

int main(){
    int reading,even=0,odd=0,temp;
    printf("Enter your Electricity Meter reading: ");
    scanf("%i",&reading);
    temp=reading;
    while (temp!=0){
        if ((temp%10)%2==0){
            temp/=10;
            even+=1;
        }else{
            temp/=10;
            odd+=1;
        }
    }
    printf("The Digits that are even are %d and the digits odd are %d\n",even,odd);



    return 0;
}