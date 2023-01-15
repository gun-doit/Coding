#include<stdio.h>
int main(void){
    int x,y,w,h;

    scanf("%d %d %d %d", &x, &y, &w, &h);
    printf("%d\n",(x < w-x ? x : w-x) < (y < h-y ? y : h-y) ? (x < w-x ? x : w-x) : (y < h-y ? y : h-y));
}