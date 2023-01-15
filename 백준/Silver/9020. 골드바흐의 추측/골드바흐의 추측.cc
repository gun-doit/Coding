#include<stdio.h>

//소수 판별
int prime_number(int num){
    if(num == 1) return 0;

    int i = 2;
    for(i;i*i<=num; i++){
        if(num % i == 0) return 0;
    }
    return 1;
}

int main(){
    int Testcase, n;
    int a, b;
    //입력
    scanf("%d", &Testcase);
    for(int i = 0; i<Testcase; i++){
        scanf("%d", &n);
        a = n/2;
        b = n/2;
        //계산
       
        while(prime_number(a) == 0|| prime_number(b) == 0){
            a-=1;
            b+=1;
        }
        
        //출력
        printf("%d %d\n", a, b);
    }
}