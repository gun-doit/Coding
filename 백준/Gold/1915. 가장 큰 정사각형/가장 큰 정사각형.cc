#include<stdio.h>

int min(int a, int b, int c){
    return (a < b ? a : b) < c ? (a < b ? a : b) : c;
}


int main(void){
    int rows, cols;
    int max = 0;
    int arr[1001][1001];
    int dp[1001][1001];
    char c[1000];

    scanf("%d %d", &rows, &cols);
    
    //배열 받기
    for(int i = 1; i<=rows; i++){
        scanf("%s", c);
        for(int j = 0; j< cols; j++){
            arr[i][j+1] = c[j]-'0';
        }
    }
    //구하기
    for(int i = 1; i<=rows; i++){
        for(int j = 1; j<=cols; j++){

            if(arr[i][j] == 0) continue;
            dp[i][j] = min(dp[i][j-1], dp[i-1][j-1], dp[i-1][j])+1;

            if(max < dp[i][j]) max = dp[i][j];
        }
    }
    
    printf("%d", max*max);
    return 0;
}