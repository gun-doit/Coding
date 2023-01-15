//Silver IV
#include <bits/stdc++.h>
using namespace std;

int N, M;
map<string, bool> see;
vector<string> ans;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> N >> M;
    string str;
    for(int i = 0; i<N; i++){
        cin >> str;
        see.insert(make_pair(str,true));
    }

    for(int i = 0; i<M; i++){
        cin >> str;
        if(see[str] == true){
            ans.push_back(str);
        }
    }

    cout << ans.size() << "\n";
    sort(ans.begin(), ans.end());
    for(int i = 0; i<ans.size(); i++){
        cout << ans[i] << "\n";
    }
    return 0;
}