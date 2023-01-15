#include<stdio.h>

int AP(int i){
    if(i == 1000) return 0;
    if(i >= 100){
        if(i%10 - (i/10%10) == (i/10%10) - i/100) return 1;
        else return 0;
    }
    if(i < 100) return 1;
}

int main(void){
    int cnt = 0;
    int NUM;
    scanf("%d", &NUM);
    for(int i =1; i <= NUM; i++) {
        if(AP(i) == 1) cnt++;
    }
    printf("%d", cnt);
}