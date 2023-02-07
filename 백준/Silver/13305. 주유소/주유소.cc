//Silver III
#include<iostream>
#include<vector>

#include<limits.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N = 0;
    cin >> N;
    vector<int> road;
    vector<int> gasPrice;
    vector<int> dp;
    int minGas = 1000000001;
    int drive = 0;
    int k = 0;

    for(int i = 0; i<N-1; i++){
        cin >> k;
        road.push_back(k);
    }

    for(int i = 0; i<N; i++){
        cin >> k;
        gasPrice.push_back(k);
    }

    for(int i = 0; i<N-1; i++){
        drive += road[i];
        if(minGas > gasPrice[i]) minGas = gasPrice[i];
        if(i == 0) dp.push_back(gasPrice[0]*drive);
        else dp.push_back(dp[i-1] + (road[i]*minGas));
    }
    
    cout << dp.back() << endl;
    return 0;
}