#include<stdio.h>

int ConvertNum(int Num){
    int cvt = (Num % 100 - Num %10)/10;
    cvt = (Num%10)*100 + cvt*10 + Num/100;
    return cvt;
}

int main(void){
    int a,b;

    scanf("%d %d", &a, &b);
    ConvertNum(a) > ConvertNum(b) ? printf("%d\n", ConvertNum(a)) : printf("%d\n", ConvertNum(b));
    
}