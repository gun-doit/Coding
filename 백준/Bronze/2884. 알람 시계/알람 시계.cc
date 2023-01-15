#include<stdio.h>

int main(void){
    int H, M;
    scanf("%d %d", &H, &M);

    if(M >= 45) M = M - 45;
    else{
        if(H == 0) H =23;
        else H--;
        M = 15 + M;
    }
    printf("%d %d", H,M);
}