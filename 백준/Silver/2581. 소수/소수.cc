#include<stdio.h>

int compare(int a){
    int cnt = 1;
    if(a == 1) return 0;
    if(a == 2) return a;
    for(int i=2; i<a; i++){
        if(a%i == 0) cnt = 0;
    }
    if(cnt == 0) return 0;
    else return a;
}

int main(void){
    int M,N;
    int min = 0;
    int sum = 0;

    scanf("%d %d",&M, &N);
    for(; M<=N; M++){
        if(min == 0) min = compare(M);
        sum += compare(M);
    }
    if(sum == 0) printf("-1\n");
    else printf("%d\n%d\n", sum, min);
}