#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

#define MAX 300001
using namespace std;

int main(){
    int N, K;
    int i = 0;
    int bag_info = 0;
    priority_queue<int, vector<int>, less<int>> q;

    ios_base::sync_with_stdio(0);
    cin.tie(0); //cin 실행속도 향상

    //입력
    cin >> N >> K;
    pair<int,int> jewel[MAX];
    int bag[MAX];

    for(i = 0; i<N; i++){
        cin >> jewel[i].first >> jewel[i].second;
    }
    
    for(i = 0; i<K; i++){
        cin >> bag[i];
    }

    sort(jewel, jewel+N);
    sort(bag, bag+K);

    //계산
    int idx = 0;
    long long price = 0;
    for(i=0; i<K; i++){
        while(idx < N && bag[i] >= jewel[idx].first){
            q.push(jewel[idx].second);
            idx++;
        }
        if(!q.empty()){
            price+=q.top();
            q.pop();
        }
    }
    printf("%lld", price);
}