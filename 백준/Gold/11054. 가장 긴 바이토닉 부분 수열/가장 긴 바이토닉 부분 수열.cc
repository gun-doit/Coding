#include<iostream>
#include<vector>
#include<deque>

using namespace std;

deque<int> S;
deque<int> reverseS;
vector<int> low_dp;
vector<int> high_dp;
int maxValue = 0;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N, k;
    cin >> N;
    for(int i = 0; i<N; i++){
        cin >> k;
        S.push_back(k);
        reverseS.push_front(k);
        low_dp.push_back(1);
        high_dp.push_back(1);
    }

    for(int i = 0; i<N; i++){
        for(int j = 0; j<i; j++){
            if(S[i] > S[j]){
                high_dp[i] = max(high_dp[i], high_dp[j] + 1);
            }
            if(reverseS[i] > reverseS[j]){
                low_dp[i] = max(low_dp[i], low_dp[j] + 1);
            }
        }
    }
    for(int i = 0; i<N; i++){
        maxValue = max(maxValue, high_dp[i] + low_dp[N-i-1] -1);
    }
    cout << maxValue << endl;
    return 0;
}