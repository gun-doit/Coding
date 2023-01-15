#include<stdio.h>
#include<math.h>

//소수 구하는 함수
int prime_number(int num){
    if(num == 1) return 0;

    int i = 2;
    for(i;i*i<=num; i++){
        if(num % i == 0) return 0;
    }
    return 1;
}

int main(void){
    int testcase = 1;
    int count_prime = 0;

    //입력
    while(testcase){
        scanf("%d", &testcase);
        count_prime = 0;

        if(testcase == 0) break; //종료
        
        //계산
        for(int j = testcase+1; j<=2*testcase; j++){
            if(prime_number(j) == 1) count_prime++;
        }
        
        //출력
        printf("%d\n", count_prime);
    }
}