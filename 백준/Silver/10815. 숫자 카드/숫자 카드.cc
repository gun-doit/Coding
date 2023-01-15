//Silver V
#include <bits/stdc++.h>
using namespace std;

int N, M;
map<int,bool> sang;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> N;
    int k = 0;
    for(int i  =0 ;i<N; i++){
        cin >> k;
        sang.insert(make_pair(k,true));
    }
    cin >> M;
    for(int i = 0; i<M; i++){
        cin >> k;
        if(sang[k] == true) cout << 1 << " ";
        else cout << 0 << " ";
    }

    return 0;
}