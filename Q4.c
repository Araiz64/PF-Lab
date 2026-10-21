#include <stdio.h>

int main(){
    char word_grid[3][100];
    char longest[100];
    char c;
    int len,start,col;
    int max=0,maxrow=0,maxcol=0;
    for (int i=0;i<3;i++){
        printf("Enter Row %i (3 words): ",i+1);
        scanf("%99[^\n]",word_grid[i]);
        getchar();
    }
    for (int i=0;i<3;i++){
        len=0;
        col=0;
        start=0;
        for (int j=0;j<100;j++){
            c=word_grid[i][j];
            if (c!=' '&&c!='\0'){
                if (len==0)
                    start=j;
                len+=1;
            }else{
                if (len>0){
                    if (len>max){
                        max=len;
                        maxrow=i;
                        maxcol=col;
                        for (int k=0;k<len;k++){
                            longest[k]=word_grid[i][start+k];
                        }
                        longest[len]='\0';
                    }
                    col+=1;
                    len=0;
                }
                if (c=='\0')
                    break;
            }
        }
    }
    printf("The Longest Word is %s with length %i\n",longest,max);
    printf("It is at Row %i and Column %i\n",maxrow,maxcol);



    return 0;
}
