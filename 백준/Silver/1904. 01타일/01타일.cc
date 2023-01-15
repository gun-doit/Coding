//Silver III
#include <bits/stdc++.h>
using namespace std;

int N;
int dp[1000001] = {0,};

int solution(int N){
    if(dp[N] != 0) return dp[N];
    dp[N] = (solution(N-1) + solution(N-2)) % 15746 ;
    return dp[N];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> N;
    dp[1] = 1;
    dp[2] = 2;
    if(N <= 2) printf("%d\n", dp[N]);
    else{
        printf("%d\n", solution(N));
    }
    return 0;
} 
