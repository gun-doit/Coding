#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char str[50];
    int T;
    int enable = 0;

    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%s", str);
        
        enable = 0;
        for(int i = 0; i<strlen(str); i++){
            if(enable < 0) break;
            if(str[i] == '(') enable++;
            else enable--;
        }
        
        if(enable != 0)printf("NO\n");
        else printf("YES\n");
    }
    
}