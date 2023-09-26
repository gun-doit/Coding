#include <bits/stdc++.h>
using namespace std;

long long Min = 0;
long long Max = 0;

void solution(vector<bool> &visited){
    long long cnt = 0;
    for(long long i = 2; i*i<=Max; i++){
        long long j = Min / (i*i);
        if(Min % (i*i)) j++;

        while(j * i * i <= Max){
            visited[j*i*i-Min] = true;
            j++;
        }
    }

    for(long long i = 0; i<=Max-Min; i++){
        if(visited[i] == false) cnt++;
    }
    cout << cnt;
}

void Answer(){
    cin >> Min >> Max;
    vector<bool> visited(Max-Min+1);
    fill(visited.begin(), visited.end(), false);
    solution(visited);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    Answer();
    return 0; 
}