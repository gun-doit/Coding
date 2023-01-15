#include<iostream>

using namespace std;
int memo[11] = {1,1,2,6,24,120,720,5040,40320,362880,3628800};
int main(){
    int N, K;

    //입력
    cin >> N >> K;
    
    //solution
    int ans = memo[N] / (memo[K] * memo[N-K]);
    
    //OUTPUT
    cout << ans;
}