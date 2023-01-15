#include<stdio.h>
#include<string.h>
#define max 10000

int main(void){
    int A[10001] = { 0 };
    int B[10001] = { 0 };
    int ans[10001] = { 0 };
    char s1[10001] = { 0 };
    char s2[10001] = { 0 };
    char tmp;

    int l_len, s_len;
    scanf("%s %s", s1, s2);

    if(strlen(s1) > strlen(s2)){
        tmp = 'A';
        l_len = strlen(s1);
        s_len = strlen(s2);
    }
    else { tmp = 'B'; l_len = strlen(s2); s_len = strlen(s1); }

    int idx = l_len -1;
    switch (tmp){
        case 'A':
            for(int i = l_len - 1; i>=0; i--) A[i] = s1[i] - '0';
            for(int i = s_len - 1; i>=0; i--) { B[idx] = s2[i] - '0'; idx--; } 
            break;
        default:
            for(int i = l_len - 1; i>=0; i--) A[i] = s2[i] - '0';
            for(int i = s_len - 1; i>=0; i--) { B[idx] = s1[i] - '0'; idx--; } 
            break;
    }

    int plus = 0;
    for(int i = l_len + 1; i>=0; i--){
        ans[i] = A[i-1] + B[i-1] + plus;
        plus = 0;
        if(ans[i] >= 10){ ans[i] %= 10; plus = 1;}
    }
    

    /*for(int i = 0; i<l_len; i++) printf("%d", A[i]);
    printf("\n");
    for(int i = 0; i<l_len; i++) printf("%d", B[i]);
    printf("\n");*/
    for(int i = 0; i<l_len + 1; i++) {
        if(ans[i] == 0 && i == 0) continue;
        printf("%d", ans[i]);
    }
}