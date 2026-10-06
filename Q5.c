#include <stdio.h>
long long factorial(int n);
int main(){
    int num;
    long long catlan;
    printf("Enter a Number to return catlan number: ");
    scanf("%i",&num);
    if (num<0)
    {
        printf("The Catlan Series is not defined for negative numbers\n");
        return 0;
    }
    catlan=(factorial(2*num))/(factorial(num+1)*factorial(num));
    printf("The Catlan Number for the number %i is %lli\n",num,catlan);



    return 0;
}

long long factorial(int n){
    long long fact=1;
    for (int i = 1;i<=n;i++){
        fact*=i;
    }
    return fact;


}