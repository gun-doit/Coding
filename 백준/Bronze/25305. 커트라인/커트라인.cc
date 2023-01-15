#include<stdio.h>
#include<stdlib.h>

int static compare(const void* first, const void* second){
    if(*(int*)first < *(int*)second) return 1;
    else if(*(int*)first > *(int*)second) return -1;
    else return 0;
}
int main(){
    int N, k = 0;
    int score[1001] = {0,};

    //INPUT
    scanf("%d %d", &N, &k);
    for(int i = 0; i<N; i++){
        scanf("%d", &score[i]);
    }

    //SORT
    qsort(score,N,sizeof(int), compare);

    //OUTPUT
    printf("%d", score[k-1]);
}