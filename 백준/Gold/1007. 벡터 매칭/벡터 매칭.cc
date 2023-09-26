#include <bits/stdc++.h>
using namespace std;

int T, N;
double result = 1000000000.0;
bool visited[21] = {false,};
pair<int,int> pos[21];
pair<int,int> group1, group2;

double solution(){
    group1 = {0,0};
    group2 = {0,0};

    for(int i = 0; i<N; i++){
        if(visited[i]){
            group1.first += pos[i].first;
            group1.second += pos[i].second;
        }else{
            group2.first += pos[i].first;
            group2.second += pos[i].second;
        }
    }
    return sqrt(pow(group1.first - group2.first, 2) + pow(group1.second - group2.second, 2));
}


void dfs(int remain, int startidx){
    if(remain == 0){
        double len = solution();
        if(result > len) result = len;
    }
    else{
        for(int i = startidx; i < N; i++){
            if(!visited[i]){
                visited[i] = true;
                dfs(remain-1, i);
                visited[i] = false;
            }
        }
    }
}

void Answer(){
    cin >> T;
    for(int i = 0; i<T; i++){
        result = 1000000000.0;
        cin >> N;
        for(int j = 0; j < N; j++){
            cin >> pos[j].first >> pos[j].second;
        }
        
        dfs(N/2, 0);
        cout << fixed;
        cout.precision(7);
        cout << result << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    Answer();
    return 0;
}