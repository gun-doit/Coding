#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int compare(const void *a, const void *b) 
{ 
    int num1 = *(int*)a;
    int num2 = *(int*)b;

    return num1 <= num2 ? num1 == num2 ? 0 : -1 : 1;
}

int main(void){
    int N;
    
    //입력
    scanf("%d", &N);
    int *array = (int*)malloc(sizeof(int)*N);
    
    for(int i = 0; i<N; i++){
        scanf("%d", &array[i]);
    }
    
    //정렬
    qsort(array,N,sizeof(array[0]),compare);
    
    //출력
    for(int i = 0; i<N; i++){
        printf("%d\n", array[i]);
    }
}