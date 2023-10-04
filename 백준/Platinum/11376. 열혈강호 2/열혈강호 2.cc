//Level : Platinum IV
#include <bits/stdc++.h>
#define MAX 2002
using namespace std;

int N, M;
int A[MAX], B[MAX];
bool visited[MAX];
vector<int> adj[MAX];

bool DFS(int a){
    visited[a] = true;
    for(int b: adj[a]){
        if(B[b] == -1 || !visited[B[b]] && DFS(B[b])){
            A[a] = b;
            B[b] = a;
            return true;
        }
    }
    return false;
}

void solution(){
    int max_matching = 0;
    fill(A, A+2*(N+1), -1);
    fill(B, B+M, -1);
    for(int i = 0; i<2*(N+1); i++){
        if(A[i] == -1){
            fill(visited, visited+2*(N+1), false);
            if(DFS(i)) ++max_matching;
        }
    }

    cout << max_matching << '\n';
}

void Answer(){
    cin>> N >> M;
    int k, tmp;
    for(int i = 0; i< N; i++){
        cin >> k;
        for(int j = 0 ; j<k; j++){
            cin >> tmp;
            adj[i * 2].push_back(tmp-1);
            adj[i *2 + 1].push_back(tmp-1);
        }
    }
    solution();
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    Answer();
    return 0;
}