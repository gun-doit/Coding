#include<stdio.h>

int main(void){
    int N;
    int New;
    int cnt = 0;
    scanf("%d", &N);
    New = N;

    do{
        if(New < 10) {New = New%10 +New*10;}
        else New = (New/10 + New%10)%10 + New%10*10;
        cnt++;
    }while(New != N);
    printf("%d", cnt);
} 