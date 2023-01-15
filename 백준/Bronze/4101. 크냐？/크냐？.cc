#include<stdio.h>

int main(void){
    int a,b;

    //입력
    while(1){
        scanf("%d %d", &a, &b);
        
        //종료
        if(a == 0 && b == 0) break;

        //출력
        a > b ? printf("Yes\n") : printf("No\n");
    }

    return 0;
}