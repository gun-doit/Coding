#include<stdio.h>

int main(void){
    int A, B, C;
    int result = 0;
    int cnt[10] = {0};
    scanf("%d %d %d", &A, &B, &C);
    result = A*B*C;
    while(result != 0){
        cnt[result%10]++;
        result = result/10;
    }
    for(int i = 0; i<10; i++) printf("%d\n", cnt[i]);
}