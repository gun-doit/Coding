#include<iostream>

using namespace std;

int main(){
    int A[101][101] = {0,};
    int ans[101][101] = {0,};

    int N, M;

    //입력
    cin >> N >> M;
    //input A
    for(int i = 0; i<N; i++){
        for(int j = 0; j<M; j++)
            cin >> A[i][j];
    }

    for(int i = 0; i<N; i++){
        for(int j = 0; j<M; j++){
            int n;
            cin >> n;
            ans[i][j] = A[i][j] + n;
        }
    }

    //입력
    for(int i = 0; i < N; i++){
        for(int j = 0; j<M; j++){
            cout << ans[i][j] << " ";
        }cout << "\n";
    }
}