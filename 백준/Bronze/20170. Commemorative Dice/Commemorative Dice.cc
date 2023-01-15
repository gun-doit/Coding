#include<stdio.h>

int main(){
    int dice1[6];
    int dice2[6];
    int sum = 0;
    int b = 36;
    
    for(int i = 0; i<6; i++){
        scanf("%d", &dice1[i]);
    }
    for(int j = 0; j<6; j++){
        scanf("%d", &dice2[j]);
    }
    
    for(int i = 0; i<6; i++){
        for(int j = 0; j<6; j++){
            sum += dice1[i] > dice2[j] ? 1 : 0;
        }
    }
    
    if(sum % 3 == 0){sum/=3; b/=3;}
    if(sum % 3 == 0){sum/=3; b/=3;}
    if(sum % 2 == 0){sum/=2; b/=2;}
    if(sum % 2 == 0){sum/=2; b/=2;}
    
    
    printf("%d/%d",sum,b);
}