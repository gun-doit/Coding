//Silver IV
#include <bits/stdc++.h>
using namespace std;

int N, M;
map<int,int> nump;
int cnt = 0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> N;
    int k = 0;
    for(int i = 0; i<N; i++){
        cin >> k;
        if(nump.find(k) == nump.end()){
            nump.insert(make_pair(k,1));
        }
        else{
            nump.at(k)++;
        }
    }

    cin >> M;
    for(int i = 0; i<M; i++){
        cin >> k;
        if(nump.find(k) == nump.end()){
            cout << 0 << " ";
        }
        else{
            cout << nump.at(k) << " ";
        }
    }
    return 0;
}