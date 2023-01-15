#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 10001

int main(void){
    int N, num = 0;
    int array[MAX] ={0,};

    //입력
    scanf("%d", &N);
    for(int i = 0; i<N; i++){
        scanf("%d", &num);
        array[num]++;
    }
  
    //출력
    for(int i = 1; i<MAX;i++){
        if(array[i] == 0) continue;
        else{
            for(int j = 0; j<array[i]; j++){
                printf("%d\n", i);
            }
        }
    }
    
}