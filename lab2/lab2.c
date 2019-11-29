#include <stdio.h>
#define MAX 5

int main(){
    int numbers[MAX];
    numbers[0]=0;
    numbers[1]=1;
    printf("%d\n%d\n",numbers[0],numbers[1]);
    for(int i=2;i<=MAX-1;i++){
        numbers[i]=numbers[i-1]+numbers[i-2];
        printf("%d\n",numbers[i]);
    }
}