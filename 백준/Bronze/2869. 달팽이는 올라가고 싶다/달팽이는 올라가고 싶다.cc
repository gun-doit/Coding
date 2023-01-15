#include<stdio.h>
#include<math.h>

int main(void){
    int V;
    int A, B;
    int day = 0;

    scanf("%d %d %d", &A, &B, &V);
    day = (V - B - 1) / (A - B) + 1;
    printf("%d\n", day);
}