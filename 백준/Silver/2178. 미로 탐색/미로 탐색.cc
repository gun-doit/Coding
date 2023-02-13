//시간 초과
//Silver II
#include<iostream>
#include<string>
#include<queue>

using namespace std;

char miro[101][101] = {0,};
int N,M;
bool visited[101][101] = {false,};
int dist[101][101] = {0,};

int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};

void bfs(int x, int y){
    queue<pair<int,int>> q;
    q.push(make_pair(x,y));
    visited[x][y] = true;
    while(!q.empty()){
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();
        dist[x][y]++;

        for(int i = 0; i<4; i++){
            int nx = cx + dx[i];
            int ny = cy + dy[i];
            if(nx >= 0 && nx < N && ny >= 0 && ny < M && visited[nx][ny] == false && miro[nx][ny] == '1'){
                q.push(make_pair(nx, ny));
                visited[nx][ny] = true;
                dist[nx][ny] = dist[cx][cy]+1;
            }
        }
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    scanf("%d %d", &N, &M);
    string input;
    for(int i = 0; i<N; i++){
        scanf("%s", miro[i]);
    }

    bfs(0,0);
    printf("%d", dist[N-1][M-1]);
    return 0;
}