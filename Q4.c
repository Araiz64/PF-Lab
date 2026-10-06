#include <stdio.h>

int main() {
    int num,rev=0,done=1,temp=0;
    printf("Enter a number: ");
    scanf("%i",&num);
    temp=num;
    while (temp!=0){
        rev=(rev*10)+(temp%10);
        temp/=10;
    }
    if (rev==num)
        printf("The %d is Palindrome",num);
    else
        printf("The %d is not Palindrome",num);
    return 0;
}