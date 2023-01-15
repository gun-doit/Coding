#include<stdio.h>
int main(void){
    char input[101];
    int len; 
    int result =0;

    scanf("%d", &len);
    scanf("%s", input);
    for(int i=0; i<len; i++) result += input[i]-48;
    printf("%d", result);
}