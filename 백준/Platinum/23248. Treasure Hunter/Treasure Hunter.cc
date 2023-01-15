#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int M, N, K;
vector<pair<int,int>> treasure;
bool visited[100001];
int ans = 0;

bool cmp(const pair<int,int> &v1, const pair<int,int> &v2){
    if(v1.first == v2.first) return v1.second < v2.second;
    else return v1.first < v2.first;
}


void solution(int i, int y){
    int x = treasure[i].first;
    for(i; i<treasure.size(); i++){
        if(x == treasure[i].first){
            if(y <= treasure[i].second && visited[i] == false){
                y = treasure[i].second;
                visited[i] = true;
            }
        }
        else break;
    }
    if(i < treasure.size()) solution(i,y);
}


int main(){
    int i, x, y = 0;

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> M >> N >> K;
    for(i = 0; i<K; i++){
        cin >> x >> y;
        treasure.push_back(pair<int,int>(x,y));
    }
    sort(treasure.begin(), treasure.end(), cmp);


    for(i = 0; i<treasure.size(); i++){
        if(visited[i] == false){
            solution(i,treasure[i].second);
            ans++;
        }
    }
 
    cout << ans << "\n";

}