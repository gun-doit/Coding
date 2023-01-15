#include<stdio.h>

int main(){
    int N = 0; //정수 N
    
    //입력
    scanf("%d", &N);
    
    
    //계산 및 출력
    for(int i = 2; i<=N; i++){
        while(N % i == 0){
            printf("%d\n", i);
            N /= i;
        }
    }
    return 0;
}