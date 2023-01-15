#include<stdio.h>

int main(void){
    //킹 1, 퀸 1, 룩 2, 비숍 2, 나이트 2, 폰 8개로 구성
    int chess[6] = {1,1,2,2,2,8};
    int input[6] = {0,};

    //입력
    for(int i = 0; i<6; i++) scanf("%d", &input[i]);

    //출력
    for(int i = 0; i<6; i++) printf("%d ", chess[i]-input[i]);

}