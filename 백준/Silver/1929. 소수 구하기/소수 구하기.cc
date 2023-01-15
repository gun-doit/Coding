//에라토스테네스의 체로 풀자
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool number[1000001] = { false };


int main(void){
    int M, N;
    
    scanf("%d %d", &M, &N);
    int n = ceil(sqrt(N));

    for(int i = 2; i <= n; i++){
        if(number[i] == true) continue;
        else{
            for(int j = i;j<=N; j+=i){
                if(j == i) continue;
                else number[j] = true;
            }
        }
    }
    if(M == 1) M++;
    for(;M<=N; M++){
        if(!number[M])printf("%d\n", M);
    }
    
}