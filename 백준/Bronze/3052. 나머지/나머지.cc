#include<stdio.h>

int main(void){
    int array[10] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    int cnt = 10;
    int input;
    
    for(int i = 0 ; i<10; i++){
        scanf("%d", &input);
        array[i] = input%42;
        for(int j = 0; j<10; j++) {
        
            if(j == i) continue;
            if(array[j] == input%42){
                cnt--; 
                break;
            }
        }

    }
    printf("%d\n", cnt);
}