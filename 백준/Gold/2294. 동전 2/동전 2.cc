#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int n, k;
vector <int> coin;
vector<int> dp;

int main(){

    scanf("%d %d", &n, &k);

    for(int i = 0; i<=k; i++){
        dp.push_back(99999);
    }
    dp[0] = 0;

    for(int i = 0; i<n; i++){
        int v;
        scanf("%d", &v);
        coin.push_back(v);
    }

    sort(coin.begin(),coin.end());

    for(int i = 0; i < n; i++){
        for(int j = coin[i]; j <= k; j++){
            if(j % coin[i] == 0) dp[j] = min(dp[j], j / coin[i]);
            else{
                for(int m = 1; m<=j / coin[i]; m++){
                    dp[j] = min(dp[j], m + dp[j - coin[i]*m]);
                }
            }
        }

    }

    if(dp[k] == 99999) printf("-1");
    else printf("%d", dp[k]);
    return 0;
}