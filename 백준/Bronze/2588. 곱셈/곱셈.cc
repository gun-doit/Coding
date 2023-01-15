#include<stdio.h>
int main(void){
    int a,b = 0;
    int c[3];
    scanf("%d %d", &a, &b);
    c[0] = b/100;
    c[1] = (b%100)/10;
    c[2] = b%10;
    printf("%d\n", a*c[2]);
    printf("%d\n", a*c[1]);
    printf("%d\n", a*c[0]);
    printf("%d\n", a*b);
}