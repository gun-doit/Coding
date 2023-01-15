#include<iostream>
#include<string.h>

using namespace std;

int map[501][501] = {0,};
int dp[501][501];

//상하좌우
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int rows, cols = 0;
int count = 0;

int dfs(int x, int y){
    int i = 0;
    if(x == rows-1 && y == cols-1) return 1;
    else if(dp[x][y] == -1){
        dp[x][y] = 0;
        for(i = 0; i<4; i++){
            int newx = x + dx[i];
            int newy = y + dy[i];
            if(newx >= 0 && newy >= 0 && newx < rows && newy < cols && map[newx][newy] < map[x][y]){
                dp[x][y] += dfs(newx,newy);
            }
        }
    }
    return dp[x][y];
}

int main(){
    int i = 0, j = 0;

    cin >> rows >> cols;

    memset(dp,-1,sizeof(dp));
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++)
            cin >> map[i][j];
    }
    cout << dfs(0,0) << "\n";
}