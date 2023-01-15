#include<stdio.h>

int main(void){
    int time[2];
    int cook_time = 0;
    int count_time = 0;
    //입력
    scanf("%d %d", &time[0], &time[1]);
    scanf("%d", &cook_time);
    

    //계산
    count_time = time[0]*60 + time[1] + cook_time;
    time[0] = count_time/60 %24;
    time[1] = count_time%60;
    
    //출력
    printf("%d %d", time[0], time[1]);   
}