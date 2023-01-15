//Silver III
#include <bits/stdc++.h>
using namespace std;

int N, M;
map<string,bool> arr;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> N >> M;
    string word;
    int ans = 0;

    for(int i = 0 ;i<N; i++){
        cin >> word;
        arr.insert(make_pair(word,true));
    }

    for(int i = 0; i<M; i++){
        cin >> word;
        if(arr[word] == true) ans++;
    }

    cout << ans;
    return 0;
}