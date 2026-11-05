#include <stdio.h>

float calculateDiscount(char type, float amount){
    float rate=0.0;
    if (type=='P'||type=='p'){
        rate=0.20;
    }else if (type=='G'||type=='g'){
        rate=0.10;
    }else if (type=='S'||type=='s'){
        rate=0.05;
    }
    if (amount>10000.0){
        rate+=0.02;
    }
    return amount*rate;
}

float calculateFinalBill(float discounted_amount){
    float tax=discounted_amount*0.15;
    float shipping=0.0;
    if (discounted_amount<=5000.0){
        shipping=300.0;
    }
    return discounted_amount+tax+shipping;
}

int main(){
    char memb_type;
    float amount,discount,discounted_amount,final_bill;
    printf("Enter membership type (P for Platinum, G for Gold, S for Standard): ");
    scanf(" %c",&memb_type);
    printf("Enter total shopping amount in PKR: ");
    scanf("%f",&amount);
    
    discount=calculateDiscount(memb_type,amount);
    discounted_amount=amount-discount;
    final_bill=calculateFinalBill(discounted_amount);
    
    printf("Discount Amount: %.2f PKR\n",discount);
    printf("Discounted Amount: %.2f PKR\n",discounted_amount);
    printf("Final Payable Amount: %.2f PKR\n",final_bill);

    return 0;
}