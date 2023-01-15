//Gold V
#include <bits/stdc++.h>
using namespace std;

int N, X;
vector<pair<int, int>> Day;
int ans = 0;
bool cmp(pair<int,int> p1, pair<int,int> p2){
    return p1.first - p1.second > p2.first - p2.second;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> N >> X;
    int a,b;
    int eatA = 0;
    if(X - (N-1)*1000 >= 5000){
        eatA = (X - (N)*1000) / 4000;
    }
    
    for(int i = 0; i<N; i++){
        cin >> a >> b;
        Day.push_back(make_pair(a,b));
    }

    sort(Day.begin(), Day.end(), cmp);
    for(int i = 0; i<N; i++){
        if(eatA > 0 ){
            if(Day[i].first > Day[i].second){
                ans += Day[i].first;
                X-=5000;
                eatA -= 1;
            }
            else{
                ans += Day[i].second;
                X-=1000;
            }
        }
        else{
            ans += Day[i].second;
            X-=1000;
        }
    }

    cout << ans << "\n";
    return 0;
}