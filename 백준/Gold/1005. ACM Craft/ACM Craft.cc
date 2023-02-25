#include <iostream>
#include<vector>
#include<string.h>
#include<queue>

using namespace std;


int main(){
    int T; cin >> T;
    
    while(T--){
        int n,k,w;
        cin >> n >> k;

        vector<long> spent(n+1,0);
        vector<int> vec[n+1];
        vector<int> entry(n+1,0);
        vector<long> dp(n+1,0);

        for(int i = 1; i<=n; i++) cin >> spent[i];
        for(int i = 0; i<k; i++){
            int a, b; cin >> a >> b;
            entry[b]++;
            vec[a].push_back(b);
        }
        cin >> w;

        queue<int> q;
        for(int i = 1; i<=n; i++){
            if(entry[i] == 0){
                q.push(i);
                dp[i] = spent[i];
            }
        }

        while(!q.empty()){
            int t = q.front(); q.pop();
            int node = t;
            for(int i =0; i<vec[node].size(); i++){
                int nxt = vec[node][i];
                dp[nxt] = max(dp[nxt], dp[node] + spent[nxt]);
                entry[nxt]--;
                if(entry[nxt] == 0){
                    q.push(nxt);
                }
            }
        }
        cout << dp[w] << "\n";

    }
    return 0;
}