#include<iostream>
#include<queue>

using namespace std;

int N, M;
int Map[8][8];
int copyMap[8][8];
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
int ans = 0;

void bfs(){
    int cnt = 0;
    queue<pair<int,int>> q;

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(copyMap[i][j]==2) q.push(make_pair(i,j));
        }
    }

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int i=0;i<4;i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(0 <= nx && nx < N && 0 <= ny && ny < M ){
                if(copyMap[nx][ny] == 0){
                    copyMap[nx][ny] = 2;
                    q.push(make_pair(nx,ny));
                }
            }
        }
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(copyMap[i][j]==0) cnt++;
        }
    }

    ans = max(ans,cnt);
}


void MakeWall(int cnt){
    if(cnt ==3){
        copy(&Map[0][0], &Map[0][0] + 64, &copyMap[0][0]);
        bfs();
        return;
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(Map[i][j] == 0){
                Map[i][j] = 1;
                MakeWall(cnt + 1);
                Map[i][j] = 0;
            }
        }
    }
}

int main(){

    scanf("%d %d", &N, &M);
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            scanf("%d", &Map[i][j]);
        }
    }

    MakeWall(0);
    printf("%d\n", ans);



    return 0;
}