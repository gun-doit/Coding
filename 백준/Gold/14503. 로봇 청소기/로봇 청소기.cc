#include <iostream>
using namespace std;

int N, M;
int house[51][51];
int visited[51][51];
int Rx,Ry, Dir;
int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};
int visited_count = 0;

void DFS(){
    for(int i = 0; i<4; i++){
        int next_dir = (Dir + 3 -i) % 4;
        int next_rx = Rx + dx[next_dir];
        int next_ry = Ry + dy[next_dir];

        if(next_rx < 0 || next_rx >= N || next_ry < 0 || next_ry >= M || house[next_rx][next_ry]){
            continue;
        }

        if(house[next_rx][next_ry] == 0 && visited[next_rx][next_ry] == 0){
            visited[next_rx][next_ry] = 1;
            Rx = next_rx;
            Ry = next_ry;
            Dir = next_dir;
            visited_count++;
            DFS();
        }
    }

    int back_idx = Dir > 1 ? Dir - 2 : Dir + 2;
    int back_rx = Rx + dx[back_idx];
    int back_ry = Ry + dy[back_idx];

    if(back_rx >= 0 && back_rx <= N || back_ry >= 0 || back_ry <= M){
        if(house[back_rx][back_ry] == 0){
            Rx = back_rx;
            Ry = back_ry;
            DFS();
        }
        else{
            cout << visited_count<< "\n";
            exit(0);
        }
    }
}

void Answer(){
    cin >> N >> M;
    cin >> Rx >> Ry >> Dir;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> house[i][j];
        }
    }
    visited[Rx][Ry] = 1;
    visited_count++;

    DFS();
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    Answer();

    return 0;
}