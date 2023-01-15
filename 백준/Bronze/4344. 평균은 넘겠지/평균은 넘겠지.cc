#include<stdio.h>
#include<stdlib.h>

int averageCal(int *score, int cnt){
    int result = 0;
    for(int i = 0; i < cnt; i++) result += score[i];
    return result/cnt;
}
int main(void){
    int C;
    int input;
    int *student;
    int average;
    int per = 0;
    scanf("%d", &C);

    for(int i = 0; i < C; i++){
        per = 0;
        scanf("%d", &input);
        student = (int *)malloc(sizeof(int) * input);
        for(int j = 0; j < input; j++) scanf("%d", &student[j]);
        average = averageCal(student,input);
        for(int j = 0; j < input; j++) if(student[j] > average) per++;
        printf("%.3f%%\n", (float)per/(float)input*100);
        free(student);
    }
}
