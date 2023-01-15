#include<bits/stdc++.h>

using namespace std;

int N;
string grid[26];
int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};
bool visited[26][26] = {false,};
priority_queue<int,vector<int>, greater<int>> count_;

int solution(int x, int y){
    if(visited[x][y] == true) return 0;
    if(x < 0 || y < 0 || x >= N || y >= N || grid[x][y] == '0') return 0;
    int num = 0;
    if(visited[x][y] == false){
        visited[x][y] = true;
        for(int i = 0; i<4; i++){
            num += solution(x+dx[i], y + dy[i]);
        }
    }
    return num + 1;
    
    
}

int main(){
    cin >> N;
    int number = 0;
    string k;
    for(int i = 0; i<N; i++){
        cin >> grid[i];
    }

    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            if(visited[i][j] == false && grid[i][j] == '1'){
                count_.push(solution(i,j));
                number++;
            }
        }
    }
    
    cout << number << endl;
    for(int i = 0;i<number; i++){
        cout << count_.top() << endl;
        count_.pop();
    }
}