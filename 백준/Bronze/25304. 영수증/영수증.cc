#include<stdio.h>

int main(void){
    int X, sum = 0; // 총금액
    int N = 0; //구매한 물건의 종류의 수
    int item[2]; //물건과 그 가격

    //입력
    scanf("%d %d", &X, &N);
    for(int i = 0; i<N; i++){
        scanf("%d %d", &item[0], &item[1]);
        sum += item[0]*item[1];
    }

    if(sum == X) printf("Yes");
    else printf("No");
}