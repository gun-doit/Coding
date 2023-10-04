//Level : Silver IV
#include <bits/stdc++.h>
using namespace std;

int N, M;
int pack = 1001, one = 1001;

int pay = 0;
vector<int> line;

void solution(){
    if(pack >= 6*one){
        cout << one*N;
    }
    else{
        while(N > 6){
            pay += pack;
            N-=6;
        }
        if(N*one < pack){
            pay += one*N;
        }
        else{
            pay += pack;
        }

        cout << pay;

    }

    return;
}

void Answer(){
    cin >> N >> M;
    int p, o;
    for(int i = 0; i<M; i++){
        cin >> p >> o;
        if(pack > p) pack = p;
        if(one > o) one = o;
    }
    solution();
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


    Answer();
    return 0;
}