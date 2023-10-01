//Level : Silver II
#include <bits/stdc++.h>
using namespace std;

int T, M, N, K;
int X, Y;
int area[51][51] = {0};
int cnt = 0;
int dx[4] ={1,-1,0,0};
int dy[4] ={0,0,1,-1};

void DFS(int x, int y){
    if( x < 0 || x >= M || y < 0 || y >= N || area[x][y] == 0){
        return;
    }
    area[x][y] = 0;
    for(int i = 0; i<4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        DFS(nx,ny);
    }
}
void solution(){
    for(int i = 0; i<M; i++){
        for(int j = 0; j<N; j++){
            if(area[i][j] == 1){
                DFS(i,j);
                cnt++;
            }
        }
    }
    cout << cnt << '\n';
}

void Answer(){
    cin >> T;
    while(T--){
        cin >> M >> N >> K;      
        memset(area,0,sizeof(area));                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
        for(int i = 0; i < K; i++){
            cin >> X >> Y;
            area[X][Y] = 1;
        }

        solution();
        cnt = 0;

    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    Answer();
    return 0;
}