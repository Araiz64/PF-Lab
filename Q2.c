#include <stdio.h>

void withdraw(float *balance,float amount){
    if (amount<=*balance){
        *balance-=amount;
        printf("Withdrawal successful.\n");
    }else{
        printf("Transaction Declined: Insufficient Balance\n");
    }
}

void deposit(float *balance,float amount){
    *balance+=amount;
    printf("Deposit successful. Updated Balance: %.2f PKR\n",*balance);
}

int main(){
    float balance=50000.0;
    char trans_type;
    float amount;
    
    printf("Initial Account Balance: %.2f PKR\n",balance);
    printf("Enter transaction type (d for debit, c for credit): ");
    scanf(" %c",&trans_type);
    printf("Enter amount: ");
    scanf("%f",&amount);
    
    if (trans_type=='d'||trans_type=='D'){
        withdraw(&balance,amount);
    }else if (trans_type=='c'||trans_type=='C'){
        deposit(&balance,amount);
    }else{
        printf("Invalid transaction type\n");
    }
    
    printf("Final Account Balance: %.2f PKR\n",balance);

    return 0;
}