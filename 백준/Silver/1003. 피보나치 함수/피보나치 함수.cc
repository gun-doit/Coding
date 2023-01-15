#include<iostream>
#include<string.h>

using namespace std;
int memo[41][2] = {0,};

void solution(int N){
    for(int i = 2; i<=N; i++){
        memo[i][0] = memo[i-1][0] + memo[i-2][0];
        memo[i][1] = memo[i-1][1] + memo[i-2][1];
    }
}
int main(){
    int T, N = 0;

    //입력
    cin >> T;
    for(int i =0; i<T; i++){
        cin >> N;
        
        //초기화
        memo[0][0] = 1;
        memo[0][1] = 0;
        memo[1][0] = 0;
        memo[1][1] = 1;

        solution(N);

        //출력
        cout << memo[N][0] << " " << memo[N][1] << endl;
    }
}