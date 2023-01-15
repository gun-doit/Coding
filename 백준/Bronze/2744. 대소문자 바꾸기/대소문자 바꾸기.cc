#include<stdio.h>
#include<string.h>

int main(){
    char str[101];

    //입력
    scanf("%s", str);

    //계산
    for(int i = 0; i<strlen(str); i++){
        if(str[i] <= 'Z') str[i] += 32;
        else str[i] -= 32;
    }

    //출력
    printf("%s",str);
}