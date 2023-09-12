#include <bits/stdc++.h>
using namespace std;

int N, M;
int space[51][51];
int dx[8] = {-1,-1,-1,0,1,1,1,0};
int dy[8] = {-1,0,1,1,1,0,-1,-1};

struct Step{
    int x,y;
    int dis;
};

int BFS(int fx, int fy){
    queue<Step> q;
    q.push({fx,fy,0});
    int visited[51][51] = {0,};
    int min = 0;

    while(!q.empty()){
        int x = q.front().x;
        int y = q.front().y;
        int dis = q.front().dis;
        q.pop();
        visited[x][y] = 1;

        for(int i = 0; i<8; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            int ndis = dis + 1;

            if(nx >= 0 && nx < N && ny >= 0 && ny < M && visited[nx][ny] == 0){
                if(space[nx][ny] == 1){
                    return ndis;
                }
                visited[nx][ny] = 1;
                q.push({nx,ny,ndis});
            }
        }
            
    }
}

void Answer(){
    int Min = 0, Max = 0;
    cin >> N >> M;
    for(int i = 0; i<N; i++){
        for(int j = 0; j<M; j++){
            cin >> space[i][j];
        }
    }

    for(int i = 0; i<N; i++){
        for(int j = 0; j<M; j++){
            if(space[i][j] == 0){
                Min = BFS(i,j);
                Max = Min > Max ? Min : Max;
            }
        }
    }
    cout << Max << '\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    Answer();
    return 0;
}