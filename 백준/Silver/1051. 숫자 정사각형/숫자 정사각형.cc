//  가장큰 정사각형 찾기
//  기본 크기는 1
#include <iostream>
#include <string>
using namespace std;

string board[50];
int N, M;

bool Check(string board[50], int i, int j, int k){
    if(board[i][j] == board[i+k][j+k] && board[i][j+k] == board[i+k][j] && board[i+k][j+k] == board[i][j+k]){
        return true;
    }
    return false;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> N >> M;
    int ans = 0;
    int maxline = N < M ? N : M;
    for(int i = 0; i<N; i++){
        cin >> board[i];
    }

    for(int i = 0; i<N-ans; i++){
        for(int j = 0; j<M-ans; j++){
            int k = ans;
            while(i + k < N && j + k < M){
                if(Check(board,i,j,k)) ans = k;
                k++;
            }
        }
    }

    cout << (ans+1)*(ans+1);

    return 0;
}