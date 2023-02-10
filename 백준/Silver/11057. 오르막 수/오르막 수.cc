//실버1

#include <iostream>
#include<algorithm>

using namespace std;

int dp[10] = {1,1,1,1,1,1,1,1,1,1};
int n;

int sum(){
    int result = 0;
    for(int i = 0; i<10; i++){
        result += dp[i];
    }
    return result;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    for(int i = 0; i<n-1; i++){
        for(int j = 1; j<=10; j++){
            dp[j] = (dp[j] + dp[j-1]) % 10007;
        }
    }

    cout << sum() % 10007;
    return 0;
}