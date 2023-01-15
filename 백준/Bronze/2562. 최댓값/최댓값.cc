#include<stdio.h>

int main(void){
    int num[9];
    int idx;
    int max = -1;
    for(int i = 0; i < 9; i++) {
        scanf("%d", &num[i]);
        if(max < num[i]) {max = num[i]; idx = i;}
    }printf("%d\n%d", max, idx+1);
}