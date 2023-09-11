#include <bits/stdc++.h>
using namespace std;

int N;
int Arr[1001];
vector<vector<int>> dp(1001, vector<int>());

void solution(){
    int idx = 0;

    for(int i = 0; i<N; i++){
        dp[i].push_back(Arr[i]);
        for(int j = 0; j<i; j++){
            if(Arr[j] < Arr[i] && dp[i].size() < dp[j].size() + 1){
                dp[i] = dp[j];
                dp[i].push_back(Arr[i]);
            }
        }
        if(dp[idx].size() < dp[i].size()) idx = i;
    }

    cout << dp[idx].size() << '\n';
    for(int i = 0; i<dp[idx].size(); i++){
        cout << dp[idx][i] << " ";
    }
}

void Answer(){
    cin >> N;
    for(int i = 0; i<N; i++){
        cin >> Arr[i];
    }
    solution();
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    Answer();
    return 0;
}