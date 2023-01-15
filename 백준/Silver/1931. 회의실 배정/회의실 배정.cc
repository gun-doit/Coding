//Silver II
#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N;
    int t1, t2;
    vector<pair<int,int>> schedule;
    
    cin >> N;
    
    for(int i = 0; i<N; i++){
        cin >> t1 >> t2;
        schedule.push_back(make_pair(t2,t1));
    }

    sort(schedule.begin(), schedule.end());

    int time = schedule[0].first;
    int cnt = 1;
    for(int i = 1; i<N; i++){
        if(time <= schedule[i].second){
            cnt++;
            time = schedule[i].first;
        }
    }

    cout << cnt;
    return 0;
}