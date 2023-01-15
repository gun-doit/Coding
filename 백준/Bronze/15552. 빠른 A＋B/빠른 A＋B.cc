#include<stdio.h>

int main(void){
    int T, i = 0;
    int A,B;
    scanf("%d", &T);
    
    for(i;i<T;i++){
        scanf("%d %d", &A,&B);
        printf("%d\n", A+B);
    } 
}