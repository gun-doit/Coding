#include<stdio.h>
#include<stdlib.h>

int main(){
    int N, X;
    int *array;
    scanf("%d %d", &N, &X);
    array = (int *)malloc(sizeof(int)*N);

    for(int i = 0; i<N; i++) scanf("%d", &array[i]);
    for(int i = 0; i<N; i++) if(array[i] < X) printf("%d ", array[i]);
    
    free(array);
}