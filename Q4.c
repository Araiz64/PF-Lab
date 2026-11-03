#include <stdio.h>

int add(int n1,int n2){
    return (n1+n2);
}

int multiply(int n1,int n2){
    return (n1*n2);
}

int findmax(int n1,int n2){
    return (a>b) ? a:b;
}

int compute(int a,int b, int(*operation)(int,int)){
    return operation(a,b)
}

int main(){
    int num1,num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Sum: %d",compute(num1,num2,add));
    printf("Product: %d",compute(num1,num2,multiply));
    printf("Maximum: %d",compute(num1,num2,findmax));

    return 0;
}