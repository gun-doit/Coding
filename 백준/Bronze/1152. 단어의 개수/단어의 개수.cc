#include<stdio.h>

int main(void){
    char word[1000000];
    int cnt = 0;

    scanf("%[^\n]s", word);
    if(word[0] == ' ' && word[1] == '\0') {printf("0\n"); return 0;}
    for(int i = 0; word[i]; i++){
        if(word[i] == ' ' && word[i+1] != '\0') cnt++;
    }
    if(word[0] == ' ') cnt-=1;
    printf("%d", cnt+1);

}