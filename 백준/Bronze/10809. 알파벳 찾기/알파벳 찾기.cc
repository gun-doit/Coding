#include<stdio.h>
#include<string.h>


int main(void){
    char str[101];
    int idx = -1;
    scanf("%s", str);

    for(char c = 'a'; c <= 'z'; c++){
        for(int i = 0; i < strlen(str); i++){
            if(c == str[i]) { idx = i; break;}
        }
        printf("%d ", idx);
        idx = -1;
    }
}