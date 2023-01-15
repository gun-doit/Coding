#include<stdio.h>
int main(void){
    double a,b = 0.0;
    scanf("%lf %lf", &a, &b);
    printf("%.9lf", a/b);
}