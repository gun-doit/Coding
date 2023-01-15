#include<stdio.h>
char d[10001];

int dn(int i){
    int value = i;
    if(i >= 10000) {value += i/10000; i%=10000;};
    if(i >= 1000) {value += i/1000; i%=1000;}
    if(i >= 100) {value += i/100; i%=100;}
    if(i >= 10) {value += i/10; i%=10;}
    return value += i;
}
int main(void){
    
    for(int i = 1; i<= 10000; i++){
        d[dn(i)] = 1;
        if(!d[i]) printf("%d\n", i);
    }
}