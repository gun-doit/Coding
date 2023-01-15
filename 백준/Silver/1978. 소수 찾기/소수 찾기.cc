#include<stdio.h>

int compare(int a){
    int cnt = 1;
    if(a == 1) return 0;
    if(a == 2) return cnt;
    for(int i=2; i<a; i++){
        if(a%i == 0) cnt = 0;
    }
    return cnt;
}

int main(void){
    int N;
    int input;
    int cnt = 0;
    scanf("%d", &N);

    for (int i = 0; i < N; i++){
        scanf("%d", &input);
        cnt += compare(input);
    }
    printf("%d\n", cnt);

    

}