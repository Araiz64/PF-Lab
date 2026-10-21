#include <stdio.h>

int main(){
    char secret_messages[3][100]={"","",""};
    int spaces,words;
    for (int i=0;i<3;i++){
        printf("Enter Message %i (Capital Letters and Spaces only): ",i+1);
        scanf("%99[A-Z ]",secret_messages[i]);
        while (getchar()!='\n');
    }
    printf("\n");
    for (int i=0;i<3;i++){
        spaces=0;
        words=0;
        for (int j=0;secret_messages[i][j]!='\0';j++){
            if (secret_messages[i][j]==' ')
                spaces+=1;
            if (secret_messages[i][j]!=' '){
                if (j==0||secret_messages[i][j-1]==' ')
                    words+=1;
            }
        }
        printf("Message %i is %s\n",i+1,secret_messages[i]);
        printf("It has %i Spaces and %i Words\n",spaces,words);
    }



    return 0;
}
