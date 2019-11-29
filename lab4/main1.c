#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    char strcp[100];
    int word=1,letter,cp=0,escaped=0;
    printf("Write a string\n");
    gets(str);
    for(int i=0;i<=strlen(str);i++){
        if(str[i]!=' ' && str[i]!='\t'){
            strcp[cp++]=str[i];
            escaped=0;
        }else {
            if(escaped==0)
                word++;
            escaped=1;
        }
    }
    printf("\nletter: %lu",strlen(strcp));
    printf("\nword: %d",word);
}