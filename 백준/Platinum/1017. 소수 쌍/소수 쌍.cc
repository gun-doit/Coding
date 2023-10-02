//Level : Platinum III
#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> A, B;
vector<vector<int>> adj;
vector<int> a_match, b_match, visited;
vector<bool> Prime(2001);

void PrimeNumber(){
    for(int i = 2; i < 45; i++){
        for(int k = 2; k*i <= 2000; k++){
            Prime[k*i] = false;
        }
    }
}

bool DFS(int a){
    if(a == 0 || visited[a]) return false;

    visited[a] = true;

    for(int i = 0; i < adj[a].size(); i++){
        int b = adj[a][i];

        if(b_match[b] == -1 || DFS(b_match[b])){
            a_match[a] = b;
            b_match[b] = a;
            return true;
        }
    }
    return false;
}

void solution(){
    if(A.size() != B.size()){
        cout << -1;
        return;
    }
    vector<int> result;
    adj = vector<vector<int>> (A.size());
    for(int i = 0;i<A.size(); i++){
        for(int j = 0; j<B.size(); j++){
            if(Prime[A[i] + B[j]]){
                adj[i].push_back(j);
            }
        }
    }

    for(int i = 0; i<adj[0].size(); i++){
        int pair_b_idx = adj[0][i];
        int paired_size = 1;

        a_match = vector<int>(A.size(), -1);
        b_match = vector<int>(B.size(), -1);

        a_match[0] = pair_b_idx;
        b_match[pair_b_idx] = 0;

        for(int j = 1; j<A.size(); j++){
            visited = vector<int>(A.size(), false);
            if(DFS(j)) paired_size++;
        }

        if(paired_size == B.size()) result.push_back(B[pair_b_idx]);
    }

    if(!result.empty()){
        sort(result.begin(), result.end());
        for(auto iter : result) cout << iter << " ";
    }
    else cout << -1;

    return;
}

void Answer(){
    cin >> n;
    int k =0;
    bool first = false;
    cin >> k;
    if(k % 2 == 0){
        first = true;
        A.push_back(k);
    }
    else{
        A.push_back(k);
    }

    for(int i = 1; i<n; i++){
        cin >> k;
        if(first){
            if(k % 2 ==0) A.push_back(k);
            else B.push_back(k);
        }
        else{
            if(k%2 == 0) B.push_back(k);
            else A.push_back(k);
        }
    }

    solution();
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    fill(Prime.begin(), Prime.end(), true);
    PrimeNumber();
    Answer();
    return 0;
}