// Level : Gold III
#include <bits/stdc++.h>
#define MAX 1001
using namespace std;

int N, K, T, W;
int x, y;
vector<int> Graph[MAX];
int Dtime[MAX];
int inDegree[MAX] = {0,};
int Dp[MAX] = {0,};

struct Step{
    int w;
    int t;
};

void solution(){
    int result[MAX];
    queue<int> q;
    for(int i = 1; i<=N; i++){
        if(inDegree[i]==0){
            q.push(i);
            Dp[i] = Dtime[i];
        }
    }

    for(int i = 1; i<=N; i++){
        if(q.empty()){
            return;
        }
        int x = q.front();
        q.pop();
        result[i] = x;
        for(int j = 0; j< Graph[x].size(); j++){
            int y = Graph[x][j];
            if(Dp[y] < Dp[x] + Dtime[y]){
                Dp[y] = Dp[x] + Dtime[y];
            }
            if(--inDegree[y] == 0){
                q.push(y);
            }
        }
    }
    
    cout << Dp[W] << '\n';
}


void Answer(){
    cin >> T;
    for(int i = 0; i<T; i++){
        cin >> N >> K;
        memset(inDegree,0,MAX*sizeof(int));
        memset(Graph,0,MAX*sizeof(vector<int>));
        memset(Dp,0,MAX*sizeof(int));
        for(int j = 1; j<=N; j++){
            cin >> Dtime[j];
        }
        for(int k = 0; k<K; k++){
            cin >> x >> y;
            Graph[x].push_back(y);
            inDegree[y]++;
        }
        cin >> W;

        solution();
        
    }
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    Answer();
    return 0;
}