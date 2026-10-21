#include <stdio.h>

int main(){
    char sentences[3][100];
    int vowels;
    char c;
    printf("Enter 3 sentences separated by semicolons:\n");
    for (int i=0;i<3;i++){
        scanf("%99[^;]",sentences[i]);
        scanf("%*c");
        for (int j=0;sentences[i][j]!='\0';j++){
            if (sentences[i][j]=='\n')
                sentences[i][j]='\0';
        }
    }
    for (int i=0;i<3;i++){
        vowels=0;
        for (int j=0;sentences[i][j]!='\0';j++){
            c=sentences[i][j];
            if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
                vowels+=1;
        }
        printf("Sentence %i:%s\n",i+1,sentences[i]);
        printf("It has %i Vowels\n",vowels);
    }



    return 0;
}
