#include<cstdio>

using namespace std;

int dp[10001][4];
int T;

void init(){
    //dp[N][k] => 숫자 N을 만들때 k라는 수가 마지막으로 옴 중복을 피하려구.
    dp[1][1] = 1;
    dp[2][1] = 1;
    dp[2][2] = 1;
    dp[3][1] = 1;
    dp[3][2] = 1; // 1 2
    dp[3][3] = 1;
}

void solution(){
    for(int n = 4; n<=10000; ++n){
        dp[n][1] = dp[n-1][1]; // 1뒤에 1만옴
        dp[n][2] = dp[n-2][1] + dp[n-2][2]; // + 1하는 경우와 + 2하는 경우
        dp[n][3] = dp[n-3][1] + dp[n-3][2] + dp[n-3][3]; // + 1, + 2, + 3;
    }
}

void getUserInput(){
    scanf("%d", &T);

    
    for(int tc = 0; tc < T; ++tc){
        int k;
        scanf("%d", &k);
        printf("%d\n", dp[k][1] + dp[k][2] + dp[k][3]);
    }
}

int main(){
    init();
    solution();
    getUserInput();
    return 0;
}