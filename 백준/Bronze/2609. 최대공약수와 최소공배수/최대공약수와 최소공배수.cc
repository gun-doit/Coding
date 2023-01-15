#include<stdio.h>

int main(){
    int num1, num2;
    int x;
    scanf("%d %d", &num1, &num2);
    for(int i = 1; i<=num1 && i<=num2; i++){
        if(num1 % i == 0 && num2 % i == 0) x = i;
    }
    printf("%d\n", x);
    printf("%d", num1*num2/x);
}