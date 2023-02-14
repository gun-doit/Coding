//Silver III
//풀이 방법
//

#include<queue>
#include<vector>
#include<iostream>
using namespace std;


int N;
int network = 0;
vector<int> com[101];


int bfs(int s){
    queue<int> q;
    int cnt = 0;
    bool visited[101] = {false, };

    q.push(s);
    while(!q.empty()){
        int x = q.front();
        visited[x] = true;
        q.pop();
        for(int i = 0; i<com[x].size(); i++){
            if(visited[com[x][i]] == false){
                q.push(com[x][i]);
                visited[com[x][i]] = true;
                cnt++;
            }
        }
    }
    return cnt;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> N;
    cin >> network;
    int g, v;
    for(int i=0; i<network; i++){
        cin >> g >> v;
        com[g].push_back(v);
        com[v].push_back(g);
    }

    printf("%d\n", bfs(1));


    return 0;
}