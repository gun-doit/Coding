#include<stdio.h>
#include<stdbool.h>

int main(){
    bool student[31] = {false,};
    int n;

    //입력
    for(int i = 0; i<28; i++){
        scanf("%d", &n);
        student[n] = true;
    } 
    
    //출력
    for(int i = 1; i<=30; i++){
        if(!student[i]) printf("%d\n", i);
    }
}