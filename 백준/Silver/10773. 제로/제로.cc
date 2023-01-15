#include<stdio.h>
#include<stdlib.h>
int main(void){
    int K;
    int N, p = 0;
    int ans = 0;
    
    scanf("%d", &K);
    int *arr = (int *)malloc(sizeof(int)* K);
    
    for(int i = 0; i<K; i++){
        scanf("%d", &N);
        if(N != 0){
            arr[p++] = N;
        }
        else p--;
    }
    for(int i = 0; i<p; i++){
        ans += arr[i];
    }
    printf("%d", ans);
}