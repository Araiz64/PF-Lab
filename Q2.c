#include <stdio.h>

int main(){
    char logs[3][30];
    int count=0;
    printf("Enter 3 CSV log entries (user,status,time)\n");
    for (int i=0;i<3;i++){
        printf("Entry %i: ",i+1);
        scanf(" %29[^,],%29[^,],%29[^\n]",logs[0],logs[1],logs[2]);
        for (int j=0;j<3;j++){
            for (int k=0;logs[j][k]!='\0';k++){
                if (logs[j][k]>='A'&&logs[j][k]<='Z')
                    count+=1;
            }
        }
    }
    printf("The Total Uppercase Letters are %i\n",count);



    return 0;
}
