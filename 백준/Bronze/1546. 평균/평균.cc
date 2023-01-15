#include<stdio.h>
#include<stdlib.h>

int main(void){
    int N;
    float *Score;
    int highscore = -1;
    float average = 0;

    scanf("%d", &N);
    Score = (float *)malloc(sizeof(float)* N);

    for(int i = 0 ; i < N; i++){
        scanf("%f", &Score[i]);
        if(highscore < Score[i]) highscore = Score[i];
    }

    for(int i = 0; i < N; i++){
        average += (Score[i]/highscore*100);
    }
    average = average/N;
    
    printf("%f", average);
    free(Score);

}