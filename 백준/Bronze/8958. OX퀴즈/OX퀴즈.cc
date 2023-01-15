#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int plusscore(int i){
    int score = 0;
    for(int j = 1; j<=i; j++) score += j;
    return score;
}

int main(void){
    char **Quiz;
    int N;
    int score, scorecnt;
    scanf("%d", &N);
    Quiz = (char **)malloc(sizeof(char *)*N);
    
    for(int loop = 0; loop<N;loop++){
        score = 0;
        scorecnt = 0;
        Quiz[loop] = (char *)malloc(sizeof(char)* 80);
        scanf("%s", Quiz[loop]);

        for(int i = 0; i < strlen(Quiz[loop]); i++){
            if(Quiz[loop][i] == 'O'){
                scorecnt++;
                score+= scorecnt;
            }
            else scorecnt = 0;
        }
        printf("%d\n", score);
    }
    
    
    for(int i = 0; i< N; i++) free(Quiz[i]);
    free(Quiz);
}