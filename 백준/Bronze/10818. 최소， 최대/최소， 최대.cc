#include<stdio.h>
#include<stdlib.h>

int main(void){
    int N;
    int *array;
    int max, min;
    
    scanf("%d", &N);
    array = (int *)malloc(sizeof(int)* N);
    for(int i = 0; i < N; i++) scanf("%d", &array[i]);
    max = array[0];
    min = array[0];

    for(int i = 1; i < N; i++){
        if(max < array[i]) max = array[i];
        if(min > array[i]) min = array[i];
    }
    printf("%d %d", min, max);
}
