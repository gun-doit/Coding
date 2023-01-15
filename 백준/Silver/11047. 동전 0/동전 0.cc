#include<iostream>
#include<vector>
using namespace std;

int solution(int coin[10], int pay, int p){
    int result = 0; //반환값 설정

    if(pay % coin[p] == 0){
        //현재 값이 현재 코인으로 나누어 질 경우
        return pay/coin[p];      
    }
    else{
        //현재 값이 코인보다 큰 경우 . 작은 경우
        result = solution(coin, pay - coin[p]*(pay/coin[p]), p-1) + pay/coin[p];
    }

    return result; //반환
}

int main(){
    int N, K;
    int coin[10];
    
    //INPUT
    cin >> N >> K;
    for(int i = 0; i < N; i++){
        cin >> coin[i];
    }

    cout << solution(coin,K,N-1) << "\n";
    
}