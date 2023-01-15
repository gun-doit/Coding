#include <bits/stdc++.h>

using namespace std;

#define Pint pair<int,int>
int N;
vector<Pint> p;


bool cmp(Pint p1, Pint p2){
    if(p1.second == p2.second){
        return p1.first < p2.first;
    }
    else return p1.second < p2.second;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> N;
    int p1,p2;
    for(int i = 0; i<N; i++){
        cin >> p1 >> p2;
        p.push_back(make_pair(p1,p2));
    }

    sort(p.begin(), p.end(), cmp);

    for(int i = 0; i<N; i++){
        cout << p[i].first << " " << p[i].second << "\n";
    }
    return 0;
}