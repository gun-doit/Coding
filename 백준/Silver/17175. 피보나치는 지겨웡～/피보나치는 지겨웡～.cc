#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> dp ={1,1,3,};

int fibonacci(int n){
    if(n<2){
        return n;
    }
    return fibonacci(n-2) + fibonacci(n-1);
}

void solution(){
    if(N<2) cout << 1 << '\n';
    else{
        for(int i=3; i<=N; i++){
            dp.push_back((1+dp[i-2] + dp[i-1])%1000000007);
        }
        cout << dp[N] << "\n";
    }
}

void Answer(){
    cin >> N;
    solution();
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    Answer();
    return 0;
}