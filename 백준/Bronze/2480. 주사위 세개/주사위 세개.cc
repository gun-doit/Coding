#include<stdio.h>

int main(void){
    int dice[7] = {0,};
    int input = 0;
    int prize = 0;

    //입력
    for(int i = 0; i<3; i++){
        scanf("%d", &input);
        dice[input]++;
        if(dice[input] > 1) prize = input;
    }

    //안겹칠 경우
    if(prize == 0){
        for(int i = 6; i>0; i--){
            if(dice[i] == 1){
                prize = i;
                break;
            }
        }
    }
    switch (dice[prize])
    {
        case 1:
            prize = prize*100;
            break;
        case 2:
            prize = prize*100 + 1000;
            break;
        case 3:
            prize = prize*1000 + 10000;
            break;
    }

    //출력
    printf("%d", prize);
}