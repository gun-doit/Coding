//Level : Platinum IV
#include <bits/stdc++.h>
using namespace std;

int N,M;
vector<vector<int>> cow; 
vector<int> a_match, b_match, visited;
bool DFS(int a){
    if(visited[a]) return false;

    visited[a] = true;

    for(int i = 0; i<cow[a].size(); ++i){
        int b = cow[a][i];
        if(b_match[b] == -1 || DFS(b_match[b])){
            a_match[a] = b;
            b_match[b] = a;
            return true;
        }
    }
    return false;
}

void solution(){
    int max_matching = 0;
    for(int start = 0; start<N; ++start){
        visited = vector<int>(N, false);
        if(DFS(start))
            ++max_matching;
    }
    
    cout << max_matching << "\n";
}

void Answer(){
    cin >> N >> M;
    cow = vector<vector<int>> (N);
    a_match = vector<int>(N,-1);
    b_match = vector<int>(M+1,-1);

    int k, tmp;
    for(int i=0;i<N;++i){
        cin >> k;
        for(int j = 0; j<k; ++j){
            cin >> tmp;
            cow[i].push_back(tmp);
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