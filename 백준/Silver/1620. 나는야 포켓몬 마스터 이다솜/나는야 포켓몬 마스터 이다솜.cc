//Silver IV
#include <bits/stdc++.h>
using namespace std;

int N, M;
map<string,int> pockemon_dic;
string pockemon_num[100001];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> N >> M;
    string pokemon;
    int k  = 0;
    for(int i = 1; i<=N; i++){
        cin >> pokemon;
        pockemon_dic.insert(make_pair(pokemon, i));
        pockemon_num[i].append(pokemon);
    }

    for(int i = 0; i<M; i++){
        cin >> pokemon;
        if(pokemon[0] >= '0' && pokemon[0] <= '9'){
            k = stoi(pokemon);
            cout << pockemon_num[k] << "\n";
        }
        else{
            cout << pockemon_dic[pokemon] << "\n";
        }
    }
    return 0;
}